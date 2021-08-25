#include "usb_message_available_thread.h"

USB_message_available_thread::USB_message_available_thread(QSerialPort* serial_port, J1939* j1939, uint8_t* length_of_usb_message, bool* start_USB_message_available_thread) : serial_port(serial_port), j1939(j1939), length_of_usb_message(length_of_usb_message), start_USB_message_available_thread(start_USB_message_available_thread) {

}

void USB_message_available_thread::run(){
    while(1){
        if(*start_USB_message_available_thread && serial_port->isOpen()){
            if(serial_port->bytesAvailable() >= *length_of_usb_message){
                switch(*length_of_usb_message){
                case 10:
                    /* Can bus */
                    Open_SAE_J1939_Listen_For_Messages(j1939);
                    break;
                case 30:
                    /* Measurement data */
                    break;
                }
            }
        }
        msleep(1);
    }
}
