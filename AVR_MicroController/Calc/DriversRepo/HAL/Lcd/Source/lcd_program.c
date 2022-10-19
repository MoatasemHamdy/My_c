/*
 * lcd_program.c
 *
 *  Created on: Sep 23, 2022
 *      Author: hisha
 */


#include "../../../Common/Macro.h"
#include "../../../Common/Bit_Math.h"
#include "../../../Common/STD_Types.h"
#include <util/delay.h>

#include "../../../MCAL/DIO/Header/DIO_Interface.h"

#include "../Header/Lcd_Private.h"
#include "../Header/Lcd_Config.h"
#include "../Header/Lcd_Interface.h"

void LCD_VoidSendCommand(u8 Local_Command)
{
	//	/*Rs equal low */
	//	DIO_u8SetPinValue(Lcd_ControlGroup,Lcd_ControlRS,Low);
	//	/*Rw equal low*/
	//	DIO_u8SetPinValue(Lcd_ControlGroup,Lcd_ControlRW,Low);
	//	/*Write Command*/
	//	DIO_u8SetPortValue(Lcd_DataGroup,Local_Command);
	//	/*Set the Enable*/
	//	DIO_u8SetPinValue(Lcd_ControlGroup,Lcd_ControlE,High);
	//	/*Wait for 1ms*/
	//	_delay_ms(1);
	//	/*clear the enable*/
	//	DIO_u8SetPinValue(Lcd_ControlGroup,Lcd_ControlE,Low);
	///*---------------------------------------------------------*/
	/*Rs equal low */
	DIO_u8SetPinValue(Lcd_ControlGroup,Lcd_ControlRS,Low);
	/*Rw equal low*/
	DIO_u8SetPinValue(Lcd_ControlGroup,Lcd_ControlRW,Low);
	/*Set the Enable*/
	DIO_u8SetPinValue(Lcd_ControlGroup,Lcd_ControlE,High);
	/*Write Command*/
	DIO_u8SetPortValue(Lcd_DataGroup,Local_Command);
	/*clear the enable*/
	DIO_u8SetPinValue(Lcd_ControlGroup,Lcd_ControlE,Low);


}

void LCD_VoidSendChar(u8 Local_Char)
{
	/*Rs equal High */
	DIO_u8SetPinValue(Lcd_ControlGroup,Lcd_ControlRS,High);
	/*RW Equal low */
	DIO_u8SetPinValue(Lcd_ControlGroup,Lcd_ControlRW,Low);

	/*Send Char*/
	DIO_u8SetPortValue(Lcd_DataGroup,Local_Char);
	/*Set the Enable*/
	DIO_u8SetPinValue(Lcd_ControlGroup,Lcd_ControlE,High);
	/*Wait for 1ms*/
	_delay_ms(1);
	/*clear the enable*/
	DIO_u8SetPinValue(Lcd_ControlGroup,Lcd_ControlE,Low);

}

void LCD_VoidInit(void)
{
	DIO_u8SetPinDir(Lcd_ControlGroup,Lcd_ControlRS,Output);
	DIO_u8SetPinDir(Lcd_ControlGroup,Lcd_ControlRW,Output);
	DIO_u8SetPinDir(Lcd_ControlGroup,Lcd_ControlE,Output);
	DIO_u8SetPortDir(Lcd_DataGroup,0xff);
	/*wait the delay */
	_delay_ms(35);
	/*send the function set */
	LCD_VoidSendCommand(0x38);
	/*Wait for 39us*/
	_delay_ms(1);
	/*Send the Display on */
	LCD_VoidSendCommand(0x0C);
	/*wait for 39us*/
	_delay_ms(1);
	/*send the clear*/
	LCD_VoidSendCommand(0x01);
	/*wait for 1.53ms*/
	_delay_ms(2);
}

void LCD_VoidSendString(u8 *Address_String)
{
	if (Address_String!=NULL)
	{
		while (*Address_String!='\0')
		{
			LCD_VoidSendChar(*Address_String);
			Address_String++;
		}
	}
}

void LCD_VoidSendNumber(u32 local_U32Number)
{
	u32 Local_Arr[11];
	u8 local_counter = 0 ;
	s8 i;
	if(local_U32Number == 0)
	{
		LCD_VoidSendChar('0');
	}
	else
	{
		while(local_U32Number!=0)
		{
			Local_Arr[local_counter]=(local_U32Number%10);
			local_U32Number/=10;
			//	LCD_VoidSendChar(Local_Arr[local_counter]+48);
			local_counter++;
			//  LCD_VoidSendChar(local_counter+48);

		}

		for(i =local_counter-1;i>=0;i--)
		{
			LCD_VoidSendChar(Local_Arr[i]+48);
		//	_delay_ms(200);
		}
	}
}

void LCD_VoidGoToXY(u8 Local_XPosition,u8 Local_YPosition){


	/*create the var u8 */
	u8 local_position ;
	switch (Local_XPosition)
	{
	case 0 : local_position = Local_YPosition;break;
	case 1 : local_position = Local_YPosition+0x40 ; break ;
	}
	LCD_VoidSendCommand(local_position+0x80);


}
