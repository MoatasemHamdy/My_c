/*
 * SevSeg_Private.h
 *
 *  Created on: Sep 17, 2022
 *      Author: hisha
 */

#ifndef HAL_SEVSEG_HEADER_SEVSEG_PRIVATE_H_
#define HAL_SEVSEG_HEADER_SEVSEG_PRIVATE_H_

/*Cathod*/
#define SEV_ZERO    0x3f
#define SEV_ONE     0x06
#define SEV_TWO     0x5b
#define SEV_THREE   0x4F
#define SEV_FOUR    0x66
#define SEV_FIVE    0x6D
#define SEV_SIX     0x7D
#define SEV_SEVEN   0x07
#define SEV_EIGHT   0x7F
#define SEV_NINE    0x6F


static u8 SevSeg_Arr[10]={SEV_ZERO,SEV_ONE,SEV_TWO,
						SEV_THREE,
						SEV_FOUR,
						SEV_FIVE,
						SEV_SIX,
						SEV_SEVEN,
						SEV_EIGHT,
						SEV_NINE
						};


#define SevSeg_Anaod    0
#define SevSeg_Cathod   1


#endif /* HAL_SEVSEG_HEADER_SEVSEG_PRIVATE_H_ */
