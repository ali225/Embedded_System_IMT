
#define Set_Bit(var,BitNO) (var|=(1<<BitNO))
//#define clr_Bit(var,BitNO) (var&=(~(1<<BitNO))
//#define Tog_Bit(var,BitNO) (var^=(1<<BitNO))
#define get_bit(var,BitNO)(var=(var&(1<<bitno))>>bitno)


#define CLR_BIT(VAR,BIT) VAR&=~(1<<BIT)
#define TOG_BIT(VAR,BIT) VAR^=(1<<BIT)
