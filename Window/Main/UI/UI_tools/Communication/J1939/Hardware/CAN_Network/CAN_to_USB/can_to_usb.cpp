#include "can_to_usb.h"

static QSerialPort* this_serial_port;

void QT_USB_set_serial_handler(QSerialPort* serial_port){
    this_serial_port = serial_port;
}

ENUM_J1939_STATUS_CODES QT_USB_Transmit(uint32_t ID, uint8_t data[], uint8_t DLC){
    char send_data_array[7+8] = {0};
    send_data_array[0] = 0; /* 0 Stands for can bus message */
    send_data_array[1] = 1; /* 1 Stands for extended can bus message */
    send_data_array[2] = ID >> 24;
    send_data_array[3] = ID >> 16;
    send_data_array[4] = ID >> 8;
    send_data_array[5] = ID;
    send_data_array[6] = DLC;
    for(uint8_t i = 0; i < 8; i++)
        if(i < DLC)
            send_data_array[7+i] = data[i];
        else
            send_data_array[7+i] = 0;
    this_serial_port->write(send_data_array, 7+8);
    return STATUS_SEND_OK;
}

void QT_USB_Get_ID_Data(uint32_t *ID, uint8_t data[], bool* is_new_message){
    char receive_buf[7+8] = {0};
    this_serial_port->read(receive_buf, 7+8);
    /*
     * receive_buf[0] is can bus message type
     * receive_buf[1] is extended ID e.g 4 bytes
     */
    *ID = (receive_buf[2] << 24) | (receive_buf[3] << 16) | (receive_buf[4] << 8) | receive_buf[5];
    uint8_t DLC = receive_buf[6];
    if(DLC == 0){
        *is_new_message = false;
    }else{
        for(uint8_t i = 0; i < 8; i++)
            if(i < DLC)
                data[i] = receive_buf[7+i];
            else
                data[i] = 0;
        *is_new_message = true;
    }
}
