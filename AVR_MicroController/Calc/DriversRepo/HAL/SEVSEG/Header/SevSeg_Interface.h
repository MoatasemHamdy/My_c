/*
 * SevSeg_Interface.h
 *
 *  Created on: Sep 17, 2022
 *      Author: hisha
 */

#ifndef HAL_SEVSEG_HEADER_SEVSEG_INTERFACE_H_
#define HAL_SEVSEG_HEADER_SEVSEG_INTERFACE_H_
#include "SevSeg_Private.h"
#include "SevSeg_Config.h"


void SevSeg_VoidInit(void);
void SevSeg_VoidDisplayNumber(u8 Local_Number);
void SevSeg_VoidCountUP(u16 Local_Waiting);
void SevSeg_VoidCountDown(u16 Local_Waiting);
void SevSeg_VoidDisplayRang(u8 Local_Start ,u8 Local_End);

#endif /* HAL_SEVSEG_HEADER_SEVSEG_INTERFACE_H_ */
