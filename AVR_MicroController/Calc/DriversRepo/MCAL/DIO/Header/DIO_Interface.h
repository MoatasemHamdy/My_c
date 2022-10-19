/*
 * DIO_Interface.h
 *
 *  Created on: Sep 16, 2022
 *      Author: hisha
 */

#ifndef MCAL_DIO_HEADER_DIO_INTERFACE_H_
#define MCAL_DIO_HEADER_DIO_INTERFACE_H_
#include "DIO_Private.h"
#include "DIO_Config.h"
u8 DIO_u8SetPinDir(u8 Local_GroupName,u8 Local_PinNumber,u8 Local_PinState);
u8 DIO_u8SetPinValue(u8 Local_GroupName,u8 Local_PinNumber,u8 Local_PinValue);
u8 DIO_u8GetPinRead(u8 Local_GroupName,u8 Local_PinNumber,u8 *Referance_Value);

u8 DIO_u8SetPortDir(u8 Local_GroupName,u8 Local_PortState);

u8 DIO_u8SetPortValue(u8 Local_GroupName,u8 Local_PortValue);

u8 DIO_u8GetPortRead(u8 Local_GroupName,u8 *Referance_Value);

u8 DIO_u8ControlPullUp(u8 Local_ConnectionType , u8 Local_GroupName ,u8 Local_PinNumber,u8 Local_PullUpStates);


#endif /* MCAL_DIO_HEADER_DIO_INTERFACE_H_ */
