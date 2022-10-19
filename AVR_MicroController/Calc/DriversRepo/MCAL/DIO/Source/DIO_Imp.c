/*
 * DIO_Imp.c
 *
 *  Created on: Sep 16, 2022
 *      Author: hisha
 */

#include "../../../Common/STD_types.h"
#include "../../../Common/Bit_Math.h"
#include "../../../Common/Macro.h"

#include "../Header/DIO_Register.h"
#include "../Header/DIO_Private.h"
#include "../Header/DIO_Config.h"
#include "../Header/DIO_Interface.h"


u8 DIO_u8SetPinDir(u8 Local_GroupName,u8 Local_PinNumber,u8 Local_PinState)
{
	RequestState Request ;
	if ((Local_GroupName<=DIO_GroupD)&&(Local_GroupName>=DIO_GroupA))
	{
		if((Local_PinNumber<=DIO_PIN7)&&((Local_PinNumber>=DIO_PIN0)))
		{
			if (Local_PinState == DIO_Output)
			{
				switch(Local_GroupName)
				{
				case DIO_GroupA : DIO_DDRA |=(1<<Local_PinNumber);//setbit(DIO_DDRA,Local_PinNumber);
				Request =RequestHandled ;
				break;
				case DIO_GroupB : DIO_DDRB |=(1<<Local_PinNumber);//setbit(DIO_DDRB,Local_PinNumber);
				Request =RequestHandled ;
				break;
				case DIO_GroupC : DIO_DDRC |=(1<<Local_PinNumber);//setbit(DIO_DDRC,Local_PinNumber);
				Request =RequestHandled ;
				break;
				case DIO_GroupD : DIO_DDRD |=(1<<Local_PinNumber);//setbit(DIO_DDRD,Local_PinNumber);
				Request =RequestHandled ;
				break;
				}
			}
			else if (Local_PinState == DIO_Input)
			{
				switch(Local_GroupName)
				{
				case DIO_GroupA : DIO_DDRA &=~(1<<Local_PinNumber);//CLRBIT(DIO_DDRA,Local_PinNumber);
				Request =RequestHandled ;
				break;
				case DIO_GroupB : DIO_DDRB &=~(1<<Local_PinNumber);//CLRBIT(DIO_DDRB,Local_PinNumber);
				Request =RequestHandled ;
				break;
				case DIO_GroupC : DIO_DDRC &=~(1<<Local_PinNumber);//CLRBIT(DIO_DDRC,Local_PinNumber);
				Request =RequestHandled ;
				break;
				case DIO_GroupD : DIO_DDRD &=~(1<<Local_PinNumber);//CLRBIT(DIO_DDRD,Local_PinNumber);
				Request =RequestHandled ;
				break;
				}
			}
			else
			{
				Request = RequestErrorNotValidState;
			}
		}
		else
		{
			Request = RequestErrorPinOutOFRange ;
		}
	}
	else
	{
		Request = RequestErrorGroupOutOFRange ;
	}
	return Request;
}
u8 DIO_u8SetPinValue(u8 Local_GroupName,u8 Local_PinNumber,u8 Local_PinValue )
{
	RequestState Request ;
	if ((Local_GroupName<=DIO_GroupD)&&(Local_GroupName>=DIO_GroupA))
	{
		if((Local_PinNumber<=DIO_PIN7)&&((Local_PinNumber>=DIO_PIN0)))
		{
			if (Local_PinValue == DIO_High)
			{
				switch(Local_GroupName)
				{
				case DIO_GroupA : DIO_PORTA |=(1<<Local_PinNumber);//setbit(DIO_PORTA,Local_PinNumber);
				Request =RequestHandled ;
				break;
				case DIO_GroupB : DIO_PORTB |=(1<<Local_PinNumber);//setbit(DIO_PORTB,Local_PinNumber);
				Request =RequestHandled ;
				break;
				case DIO_GroupC : DIO_PORTC |=(1<<Local_PinNumber);//setbit(DIO_PORTD,Local_PinNumber);
				Request =RequestHandled ;
				break;
				case DIO_GroupD : DIO_PORTD |=(1<<Local_PinNumber);//setbit(DIO_PORTD,Local_PinNumber);
				Request =RequestHandled ;
				break;
				}
			}
			else if (Local_PinValue == DIO_Low)
			{
				switch(Local_GroupName)
				{
				case DIO_GroupA : DIO_PORTA &=~(1<<Local_PinNumber);//CLRBIT(DIO_PORTA,Local_PinNumber);
				Request =RequestHandled ;
				break;
				case DIO_GroupB : DIO_PORTB &=~(1<<Local_PinNumber);//CLRBIT(DIO_PORTB,Local_PinNumber);
				Request =RequestHandled ;
				break;
				case DIO_GroupC : DIO_PORTC &=~(1<<Local_PinNumber);//CLRBIT(DIO_PORTC,Local_PinNumber);
				Request =RequestHandled ;
				break;
				case DIO_GroupD : DIO_PORTD &=~(1<<Local_PinNumber);//CLRBIT(DIO_PORTD,Local_PinNumber);
				Request =RequestHandled ;
				break;
				}
			}
			else
			{
				Request = RequestErrorNotValidValue;
			}
		}
		else
		{
			Request = RequestErrorPinOutOFRange ;
		}
	}
	else
	{
		Request = RequestErrorGroupOutOFRange ;
	}
	return Request;
}

u8 DIO_u8GetPinRead(u8 Local_GroupName,u8 Local_PinNumber,u8 *Referance_Value)
{
	RequestState Request ;
	if ((Local_GroupName<=DIO_GroupD)&&(Local_GroupName>=DIO_GroupA))
	{
		if((Local_PinNumber<=DIO_PIN7)&&((Local_PinNumber>=DIO_PIN0)))
		{
			switch(Local_GroupName)
			{
			case DIO_GroupA : (*Referance_Value) = Get_Bit(DIO_PINA,Local_PinNumber);
			Request =RequestHandled ;
			break;

			}
		}
		else
		{
			Request = RequestErrorPinOutOFRange ;
		}
	}
	else
	{
		Request = RequestErrorGroupOutOFRange ;

	}
	return Request;
}



u8 DIO_u8SetPortDir(u8 Local_GroupName,u8 Local_PortState)
{
	RequestState  Request ;
	if ((Local_GroupName <=DIO_GroupD)&&(Local_GroupName >=DIO_GroupA))
	{
		if (Local_PortState<=0xff)
		{	Request=RequestHandled;
		switch(Local_GroupName)
		{
		case DIO_GroupA: DIO_DDRA = Local_PortState;break;
		case DIO_GroupB: DIO_DDRB = Local_PortState;break;
		case DIO_GroupC: DIO_DDRC = Local_PortState;break;
		case DIO_GroupD: DIO_DDRD = Local_PortState;break;
		}
		}
		else
		{
			Request = RequestErrorNotValidState ;
		}
	}
	else
	{
		Request = RequestErrorGroupOutOFRange;
	}
	return Request ;

}

u8 DIO_u8GetPortRead(u8 Local_GroupName,u8 *Referance_Value)
{
	RequestState  Request ;
	if ((Local_GroupName <=DIO_GroupD)&&(Local_GroupName >=DIO_GroupA))
	{
		switch(Local_GroupName)
		{
		case DIO_GroupA: *Referance_Value=DIO_PINA ;break;
		case DIO_GroupB: *Referance_Value=DIO_PINB ;break;
		case DIO_GroupC: *Referance_Value=DIO_PINC ;break;
		case DIO_GroupD: *Referance_Value=DIO_PIND ;break;
		}
	}
	else
	{
		Request=RequestErrorGroupOutOFRange;
	}
	return Request ;

}

u8 DIO_u8SetPortValue(u8 Local_GroupName,u8 Local_PortValue)
{
	RequestState  Request ;
	if ((Local_GroupName <=DIO_GroupD)&&(Local_GroupName >=DIO_GroupA))
	{
		if (Local_PortValue<=0xff)
		{	Request=RequestHandled;
		switch(Local_GroupName)
		{
		case DIO_GroupA: DIO_PORTA = Local_PortValue;break;
		case DIO_GroupB: DIO_PORTB = Local_PortValue;break;
		case DIO_GroupC: DIO_PORTC = Local_PortValue;break;
		case DIO_GroupD: DIO_PORTD = Local_PortValue;break;
		}
		}
		else
		{
			Request = RequestErrorNotValidState ;
		}
	}
	else
	{
		Request = RequestErrorGroupOutOFRange;
	}
	return Request ;
}







