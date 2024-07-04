#include <stdio.h>

int main()
{
//--------->>ex at bit field struct <<-------
/*
struct var
{
	int bit1:1;
	int bit2:4;
	int bit3:4;
}BIT={1,2,13};
printf("%d \t %d \t %d",BIT.bit1,BIT.bit2,BIT.bit3); //-1 , 2 ,-3 
*/
//*****************************************
//------->> ex to show if bit field is biger than 1 byte <<---------
/* 
struct vald
{
	unsigned char x:3;
	unsigned char y:6;
	//unsigned char z:2;
	unsigned char z:3;
	
}VAL;
printf("%d",sizeof(VAL));
*/

}