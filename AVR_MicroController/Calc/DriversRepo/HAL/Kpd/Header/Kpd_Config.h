#ifndef KEYPAD_CONFIG_H
#define KEYPAD_CONFIG_H

#include "../../../MCAL/DIO/Header/DIO_Interface.h"
#include "../../../common/STD_types.h"
#define NO_PRESSED_KEY  0xFF


#define Kpd_ColumnGroup	DIO_GroupA
#define Kpd_Column0		DIO_PIN0
#define Kpd_Column1		DIO_PIN1
#define Kpd_Column2		DIO_PIN2
#define Kpd_Column3		DIO_PIN3

#define Kpd_RowGroup	DIO_GroupA
#define Kpd_Row0		DIO_PIN4
#define Kpd_Row1		DIO_PIN5
#define Kpd_Row2		DIO_PIN6
#define Kpd_Row3		DIO_PIN7

#define RowsNumber		4
#define ColumnsNumber	4

static const u8 Kpd_Values[RowsNumber][ColumnsNumber] ={
		{1,2,3,10},	  // for sum (+) number 10 as indicator
		{4,5,6,20},   // for sub (-) number 20 as incicator
		{7,8,9,30},	  // for multi (*) number 30 as incicator
		{50,0,60,40} // for div (/) number 40 as indicator
					  // for (result) number 50 as indicator
		// for (clear display) number 60 as indicator
};


#endif
