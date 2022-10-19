/*
 * SevSeg_Config.h
 *
 *  Created on: Sep 17, 2022
 *      Author: hisha
 */

#ifndef HAL_SEVSEG_HEADER_SEVSEG_CONFIG_H_
#define HAL_SEVSEG_HEADER_SEVSEG_CONFIG_H_
#include "../../../MCAL/DIO/Header/DIO_Interface.h"
#include "../../../Common/Macro.h"
#define SevSeg_Numbers   One
#define SevSeg_Type      SevSeg_Anaod

#if SevSeg_Numbers == One
	#define SevSeg_Group1    DIO_GroupA
#elif SevSeg_Numbers == Two
	#define SevSeg_Group1    DIO_GroupA
	#define SevSeg_Group2    DIO_GroupB
#elif SevSeg_Numbers == Three
	#define SevSeg_Group1    DIO_GroupA
	#define SevSeg_Group2    DIO_GroupB
	#define SevSeg_Group3    DIO_GroupC
#elif SevSeg_Numbers == Four
	#define SevSeg_Group1    DIO_GroupA
	#define SevSeg_Group2    DIO_GroupB
	#define SevSeg_Group3    DIO_GroupC
	#define SevSeg_Group4    DIO_GroupD
#endif

#endif /* HAL_SEVSEG_HEADER_SEVSEG_CONFIG_H_ */
