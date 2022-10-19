



#include "STD_Types.h"
	u32 sum (u32 x , u32 y);
	u32 sub (u32 x , u32 y);
	u32 multi (u32 x , u32 y);
	f64 div (u32 x , u32 y);
	u32 get_max (u32 x , u32 y);

	u32 sum (u32 x , u32 y)
	{
		return x+y;
	}
	u32 sub (u32 x , u32 y)
	{
		return x-y;
	}
	u32 multi (u32 x , u32 y)
	{
		return x*y;
	}
	f64 div (u32 x , u32 y)
	{
		return (f64)(x)/f64(y);
	}
	u32 get_max (u32 x , u32 y);