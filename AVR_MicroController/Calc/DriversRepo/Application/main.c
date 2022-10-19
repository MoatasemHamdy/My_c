
#include "../Common/Bit_Math.h"
#include "../Common/Macro.h"
#include "../Common/STD_types.h"
#include "../Common/Funcs.h"

#include <util/delay.h>
#include "../HAL/Kpd/Header/Kpd_Interface.h"
#include "../HAL/SEVSEG/Header/SevSeg_Interface.h"
#include "../HAL/Lcd/Header/Lcd_Interface.h"
//#include "../Common/MATH.h"

void main()
{
	SevSeg_VoidInit();
	Kpd_u8Init();
	LCD_VoidInit();
	u8 Operation_Indicator=0;
	u8 BtnValue = NotPressed;
	u8 arr[11]={0,0,0,0,0,0,0,0,0,0,0};
u32	Temporary_Num=0;


		LCD_VoidSendString("Welcome To My ");
		LCD_VoidGoToXY(1,0);
		LCD_VoidSendString("Claculator");
		_delay_ms(1000);
		LCD_VoidSendCommand(LCD_ClearDisplay);
		LCD_VoidGoToXY(0,0);
		LCD_VoidSendString("My Max Num is : ");
		LCD_VoidGoToXY(0x01,0x00);
		LCD_VoidSendNumber(Max_u32_Value);
		_delay_ms(1000);
		LCD_VoidSendCommand(LCD_ClearDisplay);
		LCD_VoidGoToXY(0,0);
		LCD_VoidSendString("ONLY_Positive_");
		LCD_VoidGoToXY(1,0);
		LCD_VoidSendString("And_Decimal_Nums");
		_delay_ms(1000);
		LCD_VoidSendCommand(LCD_ClearDisplay);
		LCD_VoidGoToXY(0,0);
		u8 i=0;
		while (1)
		{

		for(i=0;i<11;i++)
		{


			if (BtnValue==NO_PRESSED_KEY)
			{
			while (BtnValue==NO_PRESSED_KEY)
			{
				BtnValue=Kpd_u8CheckPressed();
			}
			}

			if((BtnValue!=10)
					&&(BtnValue!=20)&&(BtnValue!=30)
					&&(BtnValue!=40)&&(BtnValue!=50)&&(BtnValue!=60)
					&&(BtnValue!=NO_PRESSED_KEY))
			{
				if (i==0)
				{
				LCD_VoidSendCommand(LCD_ClearDisplay);
				LCD_VoidGoToXY(0,0);
				}
				arr[i]=BtnValue;
					LCD_VoidSendNumber(BtnValue);
					BtnValue=NO_PRESSED_KEY;
			}
			if (((BtnValue==10)
					||(BtnValue==20)||(BtnValue==30)
					||(BtnValue==40)||(BtnValue==50)||(BtnValue==60))
					&&(BtnValue!=NO_PRESSED_KEY))
			{
					arr[i]=BtnValue;
					LCD_VoidSendCommand(LCD_ClearDisplay);
					Operation_Indicator=BtnValue;
					LCD_VoidGoToXY(0,0);
					BtnValue=NO_PRESSED_KEY;


					break;
			}



		}
		switch (Operation_Indicator)
		{
		case 0 : break;
		case 10 :Temporary_Num+=Number_TypedInDigits(arr);
		LCD_VoidSendChar('+');
		LCD_VoidSendNumber(Temporary_Num);
		Operation_Indicator=0;
		break;
		case 20 :
			if 	(Temporary_Num==0)
			{
				Temporary_Num=Number_TypedInDigits(arr);
				LCD_VoidSendChar('-');
				LCD_VoidSendNumber(Temporary_Num);
				Operation_Indicator=0;
				break;
			}
			else if (Temporary_Num>=Number_TypedInDigits(arr))
			{
		Temporary_Num-=Number_TypedInDigits(arr);
		LCD_VoidSendChar('-');
		LCD_VoidSendNumber(Temporary_Num);
		Operation_Indicator=0;
		break;
		}
		else
		{
			LCD_VoidSendString("NEGATIVE !! ");
			Operation_Indicator=0;
			break;
		}
		case 30 :Temporary_Num*=Number_TypedInDigits(arr);
		LCD_VoidSendChar('*');
		LCD_VoidSendNumber(Temporary_Num);
		Operation_Indicator=0;
		break;
		case 40 :
			if 	(Temporary_Num==0)
			{
				Temporary_Num=Number_TypedInDigits(arr);
				LCD_VoidSendChar('/');
				LCD_VoidSendNumber(Temporary_Num);
				Operation_Indicator=0;
				break;
			}
			else if  (
				(
				(
				((f64)Temporary_Num/(f64)Number_TypedInDigits(arr))
				-(Temporary_Num/Number_TypedInDigits(arr))
				)==0
				)
				)
		{
			LCD_VoidSendChar('/');
		Temporary_Num/=Number_TypedInDigits(arr);
		LCD_VoidSendNumber(Temporary_Num);
		Operation_Indicator=0;
		break;
		}
		else
		{
			LCD_VoidSendString("Non_Decimal_Num!");
			Operation_Indicator=0;
			break;
		}
		case 50 ://Temporary_Num=Number_TypedInDigits(arr);
		LCD_VoidSendChar('=');
		LCD_VoidSendNumber(Temporary_Num);
		Operation_Indicator=0;
		break;
		case 60 : Temporary_Num=0;
		BtnValue = NotPressed;
		Operation_Indicator=0;
		LCD_VoidSendCommand(LCD_ClearDisplay);
		LCD_VoidGoToXY(0,0);
		break;
						}


		}
	}


