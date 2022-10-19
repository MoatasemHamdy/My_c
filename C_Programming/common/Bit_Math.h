#ifndef _BIT_MATH_H_ 
#define _BIT_MATH_H_
#define Set_Bit(Var,BitNo)    Var=Var|(1<<BitNo)

#define Clear_Bit(Var,BitNo)  Var=Var&(~(1<<BitNo))
#define Toggle_Bit(Var,BitNo) Var=Var^(1<<BitNo)
#define Get_Bit(Var,BitNo)    Var= (Var>>BitNo)
#endif
