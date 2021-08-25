QT       += core gui charts sql serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Window/Main/UI/UI_threads/Loop_terminal_thread/loop_terminal_thread.cpp \
    Window/Main/UI/UI_tools/Communication/Database/Database_handling/database_handling.cpp \
    Window/Main/UI/UI_tools/Communication/J1939/Hardware/CAN_Network/CAN_Network.c \
    Window/Main/UI/UI_tools/Communication/J1939/Hardware/CAN_Network/CAN_to_USB/can_to_usb.cpp \
    Window/Main/UI/UI_tools/Communication/J1939/Hardware/Memory/FLASH_EEPROM_RAM_Memory.c \
    Window/Main/UI/UI_tools/Communication/J1939/ISO_11783/ISO_11783-7_Application_Layer/Auxiliary_Valve_Command.c \
    Window/Main/UI/UI_tools/Communication/J1939/ISO_11783/ISO_11783-7_Application_Layer/Auxiliary_Valve_Estimated_Flow.c \
    Window/Main/UI/UI_tools/Communication/J1939/ISO_11783/ISO_11783-7_Application_Layer/Auxiliary_Valve_Measured_Position.c \
    Window/Main/UI/UI_tools/Communication/J1939/ISO_11783/ISO_11783-7_Application_Layer/General_Purpose_Valve_Command.c \
    Window/Main/UI/UI_tools/Communication/J1939/ISO_11783/ISO_11783-7_Application_Layer/General_Purpose_Valve_Estimated_Flow.c \
    Window/Main/UI/UI_tools/Communication/J1939/Open_SAE_J1939/Listen_For_Messages.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-21_Transport_Layer/Acknowledgement.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-21_Transport_Layer/Request.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-21_Transport_Layer/Transport_Protocol_Connection_Management.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-21_Transport_Layer/Transport_Protocol_Data_Transfer.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-71_Application_Layer/Request_Component_Identification.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-71_Application_Layer/Request_ECU_Identification.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-71_Application_Layer/Request_Software_Identification.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/DM1.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/DM14.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/DM15.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/DM16.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/DM2.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/DM3.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-81_Network_Management_Layer/Address_Claimed.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-81_Network_Management_Layer/Address_Delete.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-81_Network_Management_Layer/Address_Not_Claimed.c \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-81_Network_Management_Layer/Commanded_Address.c \
    Window/Main/UI/UI_tools/Communication/USB/Check_if_usb_message_available/usb_message_available_thread.cpp \
    Window/Main/UI/UI_tools/Communication/USB/usb_handling/usb_handling.cpp \
    Window/Main/UI/UI_tools/File_handling/Json/json_handling.cpp \
    Window/Main/UI/ui_handling.cpp \
    Window/Main/mainwindow.cpp \
    main.cpp


HEADERS += \
    Window/Main/UI/UI_threads/Loop_terminal_thread/loop_terminal_thread.h \
    Window/Main/UI/UI_tools/Communication/Database/Database_handling/database_handling.h \
    Window/Main/UI/UI_tools/Communication/J1939/Hardware/CAN_Network/CAN_Network.h \
    Window/Main/UI/UI_tools/Communication/J1939/Hardware/CAN_Network/CAN_to_USB/can_to_usb.h \
    Window/Main/UI/UI_tools/Communication/J1939/Hardware/Memory/FLASH_EEPROM_RAM_Memory.h \
    Window/Main/UI/UI_tools/Communication/J1939/Hardware/Processor_Choice.h \
    Window/Main/UI/UI_tools/Communication/J1939/ISO_11783/ISO_11783-7_Application_Layer/Application_Layer.h \
    Window/Main/UI/UI_tools/Communication/J1939/ISO_11783/ISO_11783_Enums/Enum_Auxiliary_And_General_Purpose_Valves.h \
    Window/Main/UI/UI_tools/Communication/J1939/Open_SAE_J1939/Open_SAE_J1939.h \
    Window/Main/UI/UI_tools/Communication/J1939/Open_SAE_J1939/Structs.h \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-21_Transport_Layer/Transport_Layer.h \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-71_Application_Layer/Application_Layer.h \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/Diagnostics_Layer.h \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-81_Network_Management_Layer/Network_Management_Layer.h \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939_Enums/Enum_Control_Byte.h \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939_Enums/Enum_DM14_DM15.h \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939_Enums/Enum_DM1_DM2.h \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939_Enums/Enum_Group_Function_Value.h \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939_Enums/Enum_NAME.h \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939_Enums/Enum_PGN.h \
    Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939_Enums/Enum_Send_Status.h \
    Window/Main/UI/UI_tools/Communication/USB/Check_if_usb_message_available/usb_message_available_thread.h \
    Window/Main/UI/UI_tools/Communication/USB/usb_handling/usb_handling.h \
    Window/Main/UI/UI_tools/File_handling/Json/json_handling.h \
    Window/Main/UI/ui_handling.h \
    Window/Main/mainwindow.h


FORMS += \
    Window/Main/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources/tabs/icons/icons.qrc


