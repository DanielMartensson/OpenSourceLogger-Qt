QT       += core gui sql serialport printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

RC_ICONS = application_icon.ico

SOURCES += \
    code/main/action/control/canfunctionswindows/can/canterminalwindow/canterminalwindow.cpp \
    code/main/action/control/canfunctionswindows/saeJ1939/auxiliaryvalvecommandwindow/auxiliaryvalvecommandwindow.cpp \
    code/main/action/control/canfunctionswindows/saeJ1939/componentidentificationwindow/componentidentificationwindow.cpp \
    code/main/action/control/canfunctionswindows/saeJ1939/ecuidentificationwindow/ecuidentificationwindow.cpp \
    code/main/action/control/canfunctionswindows/saeJ1939/generalvalvecommandwindow/generalvalvecommandwindow.cpp \
    code/main/action/control/canfunctionswindows/saeJ1939/saeJ1939namewindow/saej1939namewindow.cpp \
    code/main/action/control/canfunctionswindows/saeJ1939/softwareidentificationwindow/softwareidentificationwindow.cpp \
    code/main/action/control/controlwindow.cpp \
    code/main/action/view/viewwindow.cpp \
    code/main/edit/cansettings/cansettingswindow.cpp \
    code/main/edit/connection/connectionwindow.cpp \
    code/main/edit/measurement/measurementlistwindow.cpp \
    code/main/edit/measurement/measurementsource/measurementsourcewindow.cpp \
    code/main/edit/stm32/stm32window.cpp \
    code/main/file/upload/uploadwindow.cpp \
    code/main/help/about/aboutwindow.cpp \
    code/main/help/about/pinmapwindow.cpp \
    code/main/mainwindow.cpp \
    code/tools/database/database.cpp \
    code/tools/json/json.cpp \
    code/tools/threads/callperiodthread/callperiodthread.cpp \
    code/tools/threads/loggingthread/loggingthread.cpp \
    code/tools/threads/messageservicethread/messageservicethread.cpp \
    code/tools/opensaej1939/Hardware/CAN_Transmit_Receive.c \
    code/tools/opensaej1939/Hardware/FLASH_EEPROM_RAM_Memory.c \
    code/tools/opensaej1939/Hardware/Save_Load_Struct.c \
    code/tools/opensaej1939/ISO_11783/ISO_11783-7_Application_Layer/Auxiliary_Valve_Command.c \
    code/tools/opensaej1939/ISO_11783/ISO_11783-7_Application_Layer/Auxiliary_Valve_Estimated_Flow.c \
    code/tools/opensaej1939/ISO_11783/ISO_11783-7_Application_Layer/Auxiliary_Valve_Measured_Position.c \
    code/tools/opensaej1939/ISO_11783/ISO_11783-7_Application_Layer/General_Purpose_Valve_Command.c \
    code/tools/opensaej1939/ISO_11783/ISO_11783-7_Application_Layer/General_Purpose_Valve_Estimated_Flow.c \
    code/tools/opensaej1939/Open_SAE_J1939/Listen_For_Messages.c \
    code/tools/opensaej1939/Open_SAE_J1939/Startup_ECU.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-21_Transport_Layer/Acknowledgement.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-21_Transport_Layer/Request.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-21_Transport_Layer/Transport_Protocol_Connection_Management.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-21_Transport_Layer/Transport_Protocol_Data_Transfer.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-71_Application_Layer/Request_Component_Identification.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-71_Application_Layer/Request_ECU_Identification.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-71_Application_Layer/Request_Software_Identification.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/DM1.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/DM14.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/DM15.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/DM16.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/DM2.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/DM3.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-81_Network_Management_Layer/Address_Claimed.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-81_Network_Management_Layer/Address_Delete.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-81_Network_Management_Layer/Address_Not_Claimed.c \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-81_Network_Management_Layer/Commanded_Address.c \
    code/tools/qcustomplot/qcustomplot.cpp \
    code/tools/usb/usb.cpp \
    main.cpp


HEADERS += \
    code/main/action/control/canfunctionswindows/can/canterminalwindow/canterminalwindow.h \
    code/main/action/control/canfunctionswindows/saeJ1939/auxiliaryvalvecommandwindow/auxiliaryvalvecommandwindow.h \
    code/main/action/control/canfunctionswindows/saeJ1939/componentidentificationwindow/componentidentificationwindow.h \
    code/main/action/control/canfunctionswindows/saeJ1939/ecuidentificationwindow/ecuidentificationwindow.h \
    code/main/action/control/canfunctionswindows/saeJ1939/generalvalvecommandwindow/generalvalvecommandwindow.h \
    code/main/action/control/canfunctionswindows/saeJ1939/saeJ1939namewindow/saej1939namewindow.h \
    code/main/action/control/canfunctionswindows/saeJ1939/softwareidentificationwindow/softwareidentificationwindow.h \
    code/main/action/control/controlwindow.h \
    code/main/action/view/viewwindow.h \
    code/main/edit/cansettings/cansettingswindow.h \
    code/main/edit/connection/connectionwindow.h \
    code/main/edit/measurement/measurementlistwindow.h \
    code/main/edit/measurement/measurementsource/measurementsourcewindow.h \
    code/main/edit/stm32/stm32window.h \
    code/main/file/upload/uploadwindow.h \
    code/main/help/about/aboutwindow.h \
    code/main/help/about/pinmapwindow.h \
    code/main/mainwindow.h \
    code/tools/database/database.h \
    code/tools/json/json.h \
    code/tools/threads/callperiodthread/callperiodthread.h \
    code/tools/threads/loggingthread/loggingthread.h \
    code/tools/threads/messageservicethread/messageservicethread.h \
    code/tools/opensaej1939/Hardware/Hardware.h \
    code/tools/opensaej1939/ISO_11783/ISO_11783-7_Application_Layer/Application_Layer.h \
    code/tools/opensaej1939/ISO_11783/ISO_11783_Enums/Enum_Auxiliary_And_General_Purpose_Valves.h \
    code/tools/opensaej1939/Open_SAE_J1939/Open_SAE_J1939.h \
    code/tools/opensaej1939/Open_SAE_J1939/Structs.h \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-21_Transport_Layer/Transport_Layer.h \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-71_Application_Layer/Application_Layer.h \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/Diagnostics_Layer.h \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939-81_Network_Management_Layer/Network_Management_Layer.h \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939_Enums/Enum_Control_Byte.h \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939_Enums/Enum_DM14_DM15.h \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939_Enums/Enum_DM1_DM2.h \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939_Enums/Enum_Group_Function_Value.h \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939_Enums/Enum_NAME.h \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939_Enums/Enum_PGN.h \
    code/tools/opensaej1939/SAE_J1939/SAE_J1939_Enums/Enum_Send_Status.h \
    code/tools/qcustomplot/qcustomplot.h \
    code/tools/usb/usb.h

FORMS += \
    code/main/action/control/canfunctionswindows/can/canterminalwindow/canterminalwindow.ui \
    code/main/action/control/canfunctionswindows/saeJ1939/auxiliaryvalvecommandwindow/auxiliaryvalvecommandwindow.ui \
    code/main/action/control/canfunctionswindows/saeJ1939/componentidentificationwindow/componentidentificationwindow.ui \
    code/main/action/control/canfunctionswindows/saeJ1939/ecuidentificationwindow/ecuidentificationwindow.ui \
    code/main/action/control/canfunctionswindows/saeJ1939/generalvalvecommandwindow/generalvalvecommandwindow.ui \
    code/main/action/control/canfunctionswindows/saeJ1939/saeJ1939namewindow/saej1939namewindow.ui \
    code/main/action/control/canfunctionswindows/saeJ1939/softwareidentificationwindow/softwareidentificationwindow.ui \
    code/main/action/control/controlwindow.ui \
    code/main/action/view/viewwindow.ui \
    code/main/edit/cansettings/cansettingswindow.ui \
    code/main/edit/connection/connectionwindow.ui \
    code/main/edit/measurement/measurementlistwindow.ui \
    code/main/edit/measurement/measurementsource/measurementsourcewindow.ui \
    code/main/edit/stm32/stm32window.ui \
    code/main/file/upload/uploadwindow.ui \
    code/main/help/about/aboutwindow.ui \
    code/main/help/about/pinmapwindow.ui \
    code/main/mainwindow.ui



CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources/icons/buttons/buttonicons.qrc \
    resources/images/images.qrc \
    resources/style/ui/darkorange/darkorange.qrc

DISTFILES += \
    code/tools/opensaej1939/Documentation/Map DM14 - DM15 - DM16.odg \
    code/tools/opensaej1939/Documentation/Map DM14 - DM15 - DM16.odg \
    code/tools/opensaej1939/Documentation/Map DM14 - DM15 - DM16.odg \
    code/tools/opensaej1939/Documentation/Map SAE J1939.odg \
    code/tools/opensaej1939/Documentation/Map SAE J1939.odg \
    code/tools/opensaej1939/Documentation/Map SAE J1939.odg \
    code/tools/opensaej1939/Documentation/Open SAE J1939.odt \
    code/tools/opensaej1939/Documentation/Open SAE J1939.odt \
    code/tools/opensaej1939/Documentation/Open SAE J1939.odt \
    code/tools/opensaej1939/Documentation/Open SAE J1939.pdf \
    code/tools/opensaej1939/Documentation/Open SAE J1939.pdf \
    code/tools/opensaej1939/Documentation/Open SAE J1939.pdf \
    code/tools/opensaej1939/Documentation/Pictures/Project structure.png \
    code/tools/opensaej1939/Documentation/Pictures/Project structure.png \
    code/tools/opensaej1939/Documentation/Pictures/Project structure.png \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/3J Series VDC Module.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/3J Series VDC Module.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/3J Series VDC Module.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/80525_KHC_J1939_ManUtente_10-2018_ENG.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/80525_KHC_J1939_ManUtente_10-2018_ENG.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/80525_KHC_J1939_ManUtente_10-2018_ENG.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/BWM_0000842_99.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/BWM_0000842_99.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/BWM_0000842_99.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/CAN Table.PDF \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/CAN Table.PDF \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/CAN Table.PDF \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/CAN protocol (J1939 ISOBUS) for Sense42.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/CAN protocol (J1939 ISOBUS) for Sense42.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/CAN protocol (J1939 ISOBUS) for Sense42.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/PB_ETS4000J1939_E_2021-01-14_670052.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/PB_ETS4000J1939_E_2021-01-14_670052.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/PB_ETS4000J1939_E_2021-01-14_670052.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/PVED-CC_Series5_ISObus_Technical_Information_2017.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/PVED-CC_Series5_ISObus_Technical_Information_2017.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/PVED-CC_Series5_ISObus_Technical_Information_2017.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/TCI  SENSE 42 Version 3.0-25-108.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/TCI  SENSE 42 Version 3.0-25-108.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/TCI  SENSE 42 Version 3.0-25-108.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/WP29-140-06e.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/WP29-140-06e.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/WP29-140-06e.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/mv5ar.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/mv5ar.pdf \
    code/tools/opensaej1939/Documentation/Pictures/SAE J1939 Resources/mv5ar.pdf \
    code/tools/opensaej1939/Examples/Hardware/CAN_STM32.txt \
    code/tools/opensaej1939/Examples/Hardware/QT_USB.txt \
    code/tools/opensaej1939/Examples/Hardware/SD_Card.txt \
    code/tools/opensaej1939/Examples/ISO 11783/Auxiliary Valve Command.txt \
    code/tools/opensaej1939/Examples/ISO 11783/Auxiliary Valve Command.txt \
    code/tools/opensaej1939/Examples/ISO 11783/Auxiliary Valve Command.txt \
    code/tools/opensaej1939/Examples/ISO 11783/Auxiliary Valve Estimated Flow.txt \
    code/tools/opensaej1939/Examples/ISO 11783/Auxiliary Valve Estimated Flow.txt \
    code/tools/opensaej1939/Examples/ISO 11783/Auxiliary Valve Estimated Flow.txt \
    code/tools/opensaej1939/Examples/ISO 11783/Auxiliary Valve Measured Position.txt \
    code/tools/opensaej1939/Examples/ISO 11783/Auxiliary Valve Measured Position.txt \
    code/tools/opensaej1939/Examples/ISO 11783/Auxiliary Valve Measured Position.txt \
    code/tools/opensaej1939/Examples/ISO 11783/General Purpose Valve Command.txt \
    code/tools/opensaej1939/Examples/ISO 11783/General Purpose Valve Command.txt \
    code/tools/opensaej1939/Examples/ISO 11783/General Purpose Valve Command.txt \
    code/tools/opensaej1939/Examples/ISO 11783/General Purpose Valve Estimated Flow.txt \
    code/tools/opensaej1939/Examples/ISO 11783/General Purpose Valve Estimated Flow.txt \
    code/tools/opensaej1939/Examples/ISO 11783/General Purpose Valve Estimated Flow.txt \
    code/tools/opensaej1939/Examples/Open SAE J1939/Internal callback.txt \
    code/tools/opensaej1939/Examples/Open SAE J1939/Internal callback.txt \
    code/tools/opensaej1939/Examples/Open SAE J1939/Startup.txt \
    code/tools/opensaej1939/Examples/Open SAE J1939/Startup.txt \
    code/tools/opensaej1939/Examples/Open SAE J1939/Startup.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Acknowledgement.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Acknowledgement.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Acknowledgement.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Address Claimed.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Address Claimed.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Address Claimed.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Address Not Claimed.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Address Not Claimed.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Address Not Claimed.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Commanded Address.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Commanded Address.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Commanded Address.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Component Identification.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Component Identification.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Component Identification.txt \
    code/tools/opensaej1939/Examples/SAE J1939/DM1.txt \
    code/tools/opensaej1939/Examples/SAE J1939/DM1.txt \
    code/tools/opensaej1939/Examples/SAE J1939/DM1.txt \
    code/tools/opensaej1939/Examples/SAE J1939/DM16.txt \
    code/tools/opensaej1939/Examples/SAE J1939/DM16.txt \
    code/tools/opensaej1939/Examples/SAE J1939/DM16.txt \
    code/tools/opensaej1939/Examples/SAE J1939/DM2.txt \
    code/tools/opensaej1939/Examples/SAE J1939/DM2.txt \
    code/tools/opensaej1939/Examples/SAE J1939/DM2.txt \
    code/tools/opensaej1939/Examples/SAE J1939/DM3.txt \
    code/tools/opensaej1939/Examples/SAE J1939/DM3.txt \
    code/tools/opensaej1939/Examples/SAE J1939/DM3.txt \
    code/tools/opensaej1939/Examples/SAE J1939/ECU Identification.txt \
    code/tools/opensaej1939/Examples/SAE J1939/ECU Identification.txt \
    code/tools/opensaej1939/Examples/SAE J1939/ECU Identification.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Software Identification.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Software Identification.txt \
    code/tools/opensaej1939/Examples/SAE J1939/Software Identification.txt
