/*
 * SevSeg_program.c
 *
 *  Created on: Sep 17, 2022
 *      Author: hisha
 */


#include "../../../Common/STD_Types.h"
#include "../../../Common/Bit_Math.h"
#include "../../../Common/Macro.h"

#include "../../../MCAL/DIO/Header/DIO_Interface.h"

#include "../../../HAL/SevSeg/Header/SevSeg_Private.h"
#include "../../../HAL/SevSeg/Header/SevSeg_Config.h"
#include "../../../HAL/SevSeg/Header/SevSeg_Interface.h"

void SevSeg_VoidInit(void)
{
	DIO_u8SetPortDir(SevSeg_Group1,0xff); //in macros file add #define PortOut  0xff  #define Portin   0x0
	DIO_u8SetPortValue(SevSeg_Group1,0);    //in macros file add #define PortLow  0     #define PortHigh 0xff
}
void SevSeg_VoidDisplayNumber(u8 Local_Number)
{
	DIO_u8SetPortValue(SevSeg_Group1,SevSeg_Arr[Local_Number]);
}



