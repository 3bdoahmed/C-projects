#include <stdio.h>

int main()
{

/*
                               //------------------------------>> ex at pointer.
int x=5;
int *ptr=&x;

printf("x= %d \n",x); // x=5
printf("*ptr= %d \n",*ptr); // *ptr=5
printf("addrese of (x)= %p \n",&x); // &x=.........
printf("addrese of (ptr)= %p \n",ptr); //ptr=........
printf("size of(x)= %d \n",sizeof(x));  //x=4 byte
printf("size of(ptr)= %d \n",sizeof(ptr)); //ptr =4 byte according to arctecher;
//----------------------
int x=0x0061FF18; // var take vald addrese in memory.

printf("x= %d \n",*(int*)x); // i do casting to covert var to ptr so x=garbag value.

//-------------------------------------
int x=65536;
char *ptr=&x;

printf("x= %i \n",x); //x=65536
printf("ptr=%i \n",*ptr);//ptr =0 --> char ptr access only first two byte. (sol)-->> do casting to *ptr --->>*(int*)ptr

//---------------------------------------------
int x=258;
char *ptr=&x;

printf("first byte = %d \n",*ptr); // print the first byte of var x 
ptr++; //go to the adrress =&x+(1)-->>pointee_type of ptr(char)
printf("sceond byte = %d",*ptr); // print the second adrresse of var x

//--------------------------------------------
int x, *p1, *p2;
p1=&x; // p1=&x as ex &x=n
p2=(short*)p1+5; // p2 = &x+(5*2--> use data modifiy short ) so p2=n+10

printf("%d \n",p2-p1); // (&p2-&p1)/step --->dep on pointee type=4 ---->> 10/4=2
printf("%d \n",(char*)p2-(char*)p1); //modify step from 4 to 1 so (p2-p1)/1= 10/1=10

//--------------->> find the first byte and scened in var with int <<-------------------------

int x=256;
char * ptr=&x;
printf("first byte in x =%i \n",*ptr);
ptr++;
printf("scened byte in x =%i",*ptr);

//--------------------------------------------------
int x=258;
int *ptr1=&x;
char *ptr2=&x; // access first byte only.
printf("%i \n",*ptr1);  //----->> 00000 1 0 0 0 0 0 0 1 0
printf("%i \n",*ptr2); //----->> first byte >>>>>> 0 0 0 0 0 0 1 0 ==2;
*ptr2=4;               //----->> ~      ~   >>>>>> 0 0 0 0 0 1 0 0 ==4;
printf("%i \n",*ptr1); //------>> 00000 1 0 0 0 0 0 1 0 0 
//------------------------------------------------
unsigned char x=255;
char *c=&x;
unsigned char *p=&x;
printf("%i \n %i",*c,*p);

//------------------------------------
int x=50 ,y=100,z;
int *ptr=&x;
z= *(ptr+1);
printf("%i \n",z);

//------------->> example presedance with pointer <<-------------------
int x=5;
int *ptr=&x;

printf("%i \n",*ptr++); //---->> (++) is high presedance but not evluate in this line 
printf("%i \n",x); // x=5

ptr=&x;
printf("%i \n",*++ptr); // --->> (++) evluate in this line and go to (&x)+ 4 so == garbag value

ptr=&x;
(*ptr)++; // ---->> () is high presedance so == x+1

printf("%i \n",x); //----->> x=6
int y=10;
int *ptr1=&y;

printf("%i \n",*ptr + *ptr1); // ---->> == 6+ 10 =16

//----------------->> void pointer <<--------------------
int x=5;
void *ptr;
ptr=&x;
printf("%i \n",*(int*)ptr); // == 5 
printf("%p \n",ptr); // == &x
ptr++;
printf("%p",ptr); // ==&x+1 --->> due to step of void pointer is == 1 byte 
}