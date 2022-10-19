/**********************************************************************************************************************
 *  HEADER FILES INCLUSION
 *********************************************************************************************************************/
#include "../../../Common/STD_types.h"
#include "../../../Common/Bit_Math.h"
#include "../../../Common/Macro.h"


#include "../../../MCAL/DIO/Header/DIO_Interface.h"

#include "../Header/Kpd_Private.h"
#include "../Header/Kpd_Config.h"
#include "../Header/Kpd_Interface.h"




/**********************************************************************************************************************
 *  Functions Definitions
 *********************************************************************************************************************/

u8 Kpd_u8CheckPressed(){
	u8 Local_u8PressedKey = NO_PRESSED_KEY;
	u8 Local_u8ColIndex;
	u8 Local_u8RowIndex;
	u8 Local_u8ColArr[ColumnsNumber] = {Kpd_Column0, Kpd_Column1, Kpd_Column2, Kpd_Column3};
	u8 Local_u8RowArr[RowsNumber] = {Kpd_Row0, Kpd_Row1, Kpd_Row2, Kpd_Row3};
	u8 referenceValue;
	for(Local_u8ColIndex = 0; Local_u8ColIndex < ColumnsNumber; Local_u8ColIndex++){
		/*Activate current column by clearing it*/
		DIO_u8SetPinValue(Kpd_ColumnGroup,Local_u8ColArr[Local_u8ColIndex],Low);

		for(Local_u8RowIndex = 0; Local_u8RowIndex < RowsNumber; Local_u8RowIndex++){
			if(DIO_u8GetPinRead(Kpd_RowGroup,Local_u8RowArr[Local_u8RowIndex],&referenceValue) == RequestHandled && referenceValue == Low){
				Local_u8PressedKey = Kpd_Values[Local_u8RowIndex][Local_u8ColIndex];
				while(DIO_u8GetPinRead(Kpd_RowGroup,Local_u8RowArr[Local_u8RowIndex],&referenceValue) == RequestHandled && referenceValue == Low){

				}
				DIO_u8SetPinValue(Kpd_ColumnGroup,Local_u8ColArr[Local_u8ColIndex],High);
				return Local_u8PressedKey;
			}
		}

		/*Deactivate current column by setting it*/
		DIO_u8SetPinValue(Kpd_ColumnGroup,Local_u8ColArr[Local_u8ColIndex],High);

	}
	return Local_u8PressedKey;
}

u8 Kpd_u8Init(){
	u8 request;
	request = DIO_u8SetPinDir(Kpd_ColumnGroup,Kpd_Column0,Output);
	if(request != RequestHandled) {return request;}
	request = DIO_u8SetPinDir(Kpd_ColumnGroup,Kpd_Column1,Output);
	if(request != RequestHandled) {return request;}
	request = DIO_u8SetPinDir(Kpd_ColumnGroup,Kpd_Column2,Output);
	if(request != RequestHandled) {return request;}
	request = DIO_u8SetPinDir(Kpd_ColumnGroup,Kpd_Column3,Output);
	if(request != RequestHandled) {return request;}

	request = DIO_u8SetPinValue(Kpd_ColumnGroup,Kpd_Column0,High);
	if(request != RequestHandled) {return request;}
	request = DIO_u8SetPinValue(Kpd_ColumnGroup,Kpd_Column1,High);
	if(request != RequestHandled) {return request;}
	request = DIO_u8SetPinValue(Kpd_ColumnGroup,Kpd_Column2,High);
	if(request != RequestHandled) {return request;}
	request = DIO_u8SetPinValue(Kpd_ColumnGroup,Kpd_Column3,High);
	if(request != RequestHandled) {return request;}

	request = DIO_u8SetPinDir(Kpd_RowGroup,Kpd_Row0,Input);
	if(request != RequestHandled) {return request;}
	request = DIO_u8SetPinDir(Kpd_RowGroup,Kpd_Row1,Input);
	if(request != RequestHandled) {return request;}
	request = DIO_u8SetPinDir(Kpd_RowGroup,Kpd_Row2,Input);
	if(request != RequestHandled) {return request;}
	request = DIO_u8SetPinDir(Kpd_RowGroup,Kpd_Row3,Input);
	if(request != RequestHandled) {return request;}

	request = DIO_u8SetPinValue(Kpd_RowGroup,Kpd_Row0,High);
	if(request != RequestHandled) {return request;}
	request = DIO_u8SetPinValue(Kpd_RowGroup,Kpd_Row1,High);
	if(request != RequestHandled) {return request;}
	request = DIO_u8SetPinValue(Kpd_RowGroup,Kpd_Row2,High);
	if(request != RequestHandled) {return request;}
	request = DIO_u8SetPinValue(Kpd_RowGroup,Kpd_Row3,High);

	return request;
}
