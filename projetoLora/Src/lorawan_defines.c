/*
 * lorawan_defines.c
 *
 *  Created on: 13 de jul de 2023
 *      Author: pedro
 */
#include "../inc/lorawandefines.h"


#define LORAWAN_PUBLIC_NETWORK true;
#define LORAWAN_DEVICE_EUI {0x8C, 0xA2, 0x3C, 0x3A, 0xC0, 0xCE, 0x68, 0xF6}
#define LORAWAN_APP_KEY { 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11 }
#define LPP_APP_PORT 2 // indefinido
#define LORAWAN_APP_PORT 2 // porta de aplicação
#define APP_TX_DUTYCYCLE 15000
#define LORAWAN_DEFAULT_CLASS CLASS_A
#define LORAWAN_DEFAULT_CONFIRM_MSG_STATE  LORAWAN_UNCONFIRMED_MSG
#define LORAWAN_APP_DATA_BUFF_SIZE 64 // buffer da aplicação
