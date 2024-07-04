#include <stdio.h>

//***********************
//------------>> creat an struct with object while declaration <<-------
/*
#pragma pack(push,1) //to avoid badding from here
struct S_data 
{
	unsigned char data1;   //unsigned int  data2;  
	unsigned int  data2;   //unsigned short data4;  ---->> to avoid badding without any instraction to compiler
	unsigned char data3;   //unsigned char data1;          we atend the member according to large size 
	unsigned short data4;  //unsigned char data3;
}my_struct;
#pragma pack(pop) //to here
//----------------->> func to print a member of stract with & element by element<<---------

void print_member_R(char* base ,int size)
{
	for (int i=0 ;i< size ;i++)
	{
		printf("%p \t %x \n",base, *(unsigned char*)base);
		base++;
	}
}
*/ 

int main()
{

//**************************************

//--------->> ex at pointer to struct <<----------
/*
my_struct.data1=0x12;
my_struct.data2=0xffffaaaa;
my_struct.data3=0x11;
my_struct.data4=0xabcd;
print_member_R((char*)&my_struct,sizeof(my_struct));
printf("-------------------------------- \n");	
printf("%d",sizeof(my_struct)); // depend on if copiler is aligned or you ignore preformance Vs memory.
*/
//-------------------------------------------------
/*
struct S_data *ptr=&my_struct;
printf("%x \n",my_struct.data1);
printf("%x \n",(*ptr).data1);
printf("%x \n",ptr->data1);
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
//********************************************************
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


}