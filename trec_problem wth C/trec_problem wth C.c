#include <stdio.h>
#include <string.h>
#include <math.h>
// #include "BIT_MATH.h" include the file whose set or clear or toggel 
//******************************************
//SET(5,2);
//*****************************************************
//--------->> ex at linking with another file <<-------
/*
int x=5;
void fun();
*/
//*************************************************
//int sum_fun(int x ,int y); ------------->> prototype of sum_funcation 
 /* ----> swap funcation 
 void swp(int s1 ,int s2){
 int temp=s1;
 s1=s2;
 s2=temp;
 printf("After swap: num1 = %d, num2= %d\n", s1, s2);
}*/

//****************************************************
/*
int x=5; //globel varable.
void fun() ----------------->> ex at local and globel var
{
	printf("%i",x); // x_____globel ----> in c var is static.
}*/

//***************************************************
/*
//  ------->>> defintion of funcation to find factorel by use recartion funcation
int fact(int num)
{
	if (num <=1) 
	{
		return 1; // mean end func---->> under return not readabol or reachabel 
	}
	else 
	{
		return num * fact(num-1);
	}
}
*/
//****************************************************
/*
//-------->> Recursive fibonacci function <<-------------
int fibonacc(int n)
{
	if (n==1 || n==0)
		return n;
	else
		return fibonacc(n-1)+fibonacc(n-2);
}
*/
//*****************************************************
//const int const_global =10;
//********************************************
//------------->> pointer to fun <<---------
/*
int sum (int a, int b)
{
	return a+b;
}
int (*ptr_sum) (int , int )=NULL;
*/
//************************************
//----------->> swap fun by use ptr to ptr <<-----------
/*
void swap (int** a, int** b) //-------->>  argument is ptr to ptr ---->> swap betwen two pointer
{
	int *temp ;
	temp=*a;
	*a=*b;
	*b= temp;
}
*/
//*****************************************
// passing array as a funcation argument ---->> pass by refrance 
/*
void print_fun(int arr[],int size) // or int *arr 
{
	for (int i=0 ;i<size ;i++)
	{
		printf("%d \t",*(arr+i)); //or arr[i]
	}
}
*/
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
//******************************************
//--------------->> ex at union <<---------------
/*
union test_1
{
	int x; // 4 byte
	char arr[4]; // 4 byte ------>> so the size of union is 4 byte (the biggest data type )
	int y ; //4 byte 
};
//------------------------------------------
union test_2
{
	int a; // 4 byte 
	char str[2]; // 2 byte  ----->> so the size of union is 4 byte 
};
*/
int main()
{
	//***************************************
	//----------->> example at union <<---------------
	/*
	union test_1 T_1;
	T_1.x=0; // the all byte ==0 ;
	T_1.arr[1]='G'; // the scened byte == ASCII code of 'G'
	printf("%s \n",T_1.arr); // print nothing due to the null char is in first byte 
	//-------------------------------------
	printf("----------------------------------- \n");
	union test_2 T_2;
	T_2.str[0]=3; // the first byte == 3
	T_2.str[1]=2; // the second byte ==2
	// a = first byte == 0000 0011 & second byte == 0000 0010 so a= ......0000 0010 0000 0011 ==515 
	printf("%d \t %d \t %d",T_2.str[0],T_2.str[1],T_2.a); // 3    2   515
	
	*/
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

//**********************************
//----------->> print array by use funcation <<-----------
/*
	int ar[5]={1,2,3,4};
	print_fun(ar,5);
*/
//*************************************************
//------------>> swap between two ptr <<----------
 /*  
int x=5 ,y=6 ;
int *ptr1 ,*ptr2;
ptr1=&x;
ptr2=&y; 
printf("ptr1= %i \n",*ptr1);  
printf("ptr2= %i  \n",*ptr2);

swap(&ptr1,&ptr2); 
printf("ptr1= %i \n",*ptr1);  
printf("ptr2= %i  \n",*ptr2);
*/

	
	
//**********************************
//--------------->> calling funcation by use pointer <<----------
/*
  ptr_sum=sum ; // or  ptr_sum=&sum;
  if (ptr != NULL)
  {
	   int z= ptr_sum(2,3);
      printf("%i \n",z);
      int y= (*ptr_sum)(5,3);
      printf("%i \n",y);
  }
  
 
*/
//*********************************************************
	// ------------->> about const local and globel varable.
	//const int const_local =5;
	
	//int* ptr1=&const_global;
	//int* ptr2=&const_local;
	
	//const_local=50; ------>>> error ---> read only varable
	
	//* ptr1=100;
	//* ptr2=50;
	
	//printf("const_local = %i \n",const_local); -------> no error and change to 50 but warning you use pointer
    //                                                                   	to modify in const var
	//printf("const_global = %i \n",const_global); --->> not allow for you to modify -->> crash in system(wandose)
//******************************************************
	/* ----------------->> about keyword register
	 
	register int x=10;
	printf("x= %i /n",x);
	printf("%i \n",&x);---------->> error becouse no addrese in register files
	*/
	
//***************************************************

 //--------------------->> ex at extern var and linking <<----------------	
/*
	fun();
	printf("x= %i",x);
*/
//******************************************************************	
//--------------------->> ex at local and globel var <<-------------------
	/*
	int x=10;
	printf("%i \n",x); // x____local
	x+=2;  // x+2 __________local
	fun(); // in func printf x___globel not local.
	*/
	
//*****************************************************************
/*
	//----------->>>  find factorel by use recartion funcation
	int x;
	printf("please enter number: \n");
	fflush(stdout);
	scanf("%i ",&x);
	fflush(stdin); //to empt the pafel
	int f;
	f=fact(x);
	printf("factorial of num %i = %i",x,f);
*/
//****************************************************
//----------->> find fibonacc by use recartion funcation <<---------
/*
int num , result;
fflush(stdout);
printf("please enter number: \n");
scanf("%i ",&num);
fflush(stdin);
result= fibonacc(num);
printf("fibonacc(%i)= %i",num,result);
*/
//*****************************************************
//---------------->> example at promotion <<-----------	
/* comper between diff data type so promotion will occuer to promot signed to ---->> unsigned
so -1 == 1 1 1 1 1 1 1 1
and 5 == 0 0 0 0 0 1 0 1
and compiler comper between MSB of -1 and 5 so 1>0 ;
and print no!;7
*/
/*	
signed int  x =-1;
unsigned int y =5;
if (y>x)
{
	printf("ok!");
}	
else
{
	printf("no!");
}
*/
//*******************************************************************
//--------------------->> bitwase operator <<------------------	
/*
int reg=5 ;
reg |= (1<<3); // set to bit #3 in reg;
printf("%i \n", reg);
int x;
x= reg & (~(1<<3)); // clear to bit #3 in reg;
printf("%i \n ", x);
*/

//*******************************************************************
//----------------->> printf abdo ahmed with use if statment
/*
if (!printf("abdo "))  //printf is true but ! ---> not true so body of IF not evaluate 
{
	printf("Ahmed");
	
}
else 
{
	printf(" ahmed");
}
*/

//********************************************************************
// ------------>>> printf without use---> ;
/*if (printf(" abdo \n")) 
{}*/

//********************************************************************

/*
int x= (5,6,7); //according to presedance x=7
//int y;
int y= 5,6,7; //sentix error
printf("%i  %i",x,y);
*/ 

//************************************
//printf ("%d",sizeof(printf("abdoahmed")));

//*******************************************
/*
int x=10;
if (x=101)
{
	x++;
}	
printf("%i",x);
*/
//*****************************************************************
//--------------->> sizeof <<-----------------------
/*
int x=5 ,y =10 ,z=10 ;
sizeof(z=x+y);
printf("%i ",z); //---->not evaluate any operatin in sizeof so z=10 
*/ 

//*********************************************************

/*
int x= (printf("abdelrahman \n"),8); //--->according to presedance x=8 but printf will done in frist
printf("%i",x);
*/
//****************************************************************
/*
int x=5;
if (x=10) //------> mean bag in code and this is
{              //  logical error ---> x=10  not 5 and the body of IF will evaluate; 
	x++;
	printf("yes \n");
	
}
printf("%i",x); // x=11
*/
/******************************************************
//------------->> to show compilier run as big or little endian
/*  
    unsigned int value = 1;
    if (*((char*)&value) == 1) //--->> mean the first byte in int if ==1 
	{
        printf("Little-Endian\n");
    } else {
        printf("Big-Endian\n");
    }
*/
//**********************************************************

/* -------------------->> swaping <<-------------------------
  swap_1
int x=2 , y=4 ,z;
z=x;
x=y;
y=z;
printf("%i  %i ",x,y);*/
/*
--------------------------------------
       swap_2
int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("After swap: x = %d, y = %d\n", x, y);*/
	
/*	
--------------------------------------------
	    swap_3
	int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    x = x * y;
    y = x / y;
    x = x / y;
    printf("After swap: x = %d, y = %d\n", x, y);*/
	
/*	
----------------------------------------------
	 swap_4
	int x = 5, y = 10;
	 printf("Before swap: x = %d, y = %d\n", x, y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("After swap: x = %d, y = %d\n", x, y);*/
	
	
	/*
---------------------------------------------

	swap_5------------>> by using funcation
	int x,y;
	printf("please enter two number: \n");
	scanf("%i %i ",&x,&y);
	printf("Before swap: x = %d, y = %d\n", x, y);
	swp(x,y);
	printf("After swap: x = %d, y = %d\n", x, y);
*/
//**************************************************
/*
//-------------->>  this code is evluate according to presedance <<----------------------
int x=2 ,y=5;
y= (x<<2) + ++x ; // (x<<2) the first evluate so 2<<2 +3
printf("%i ",y);

------------------------------------

int x=2 ,y=5;
y= x<<2 + ++x ; // y = x<< 2 +3 = 3<<5  so y=96; in this case the opertion will eveluate from R------>L
printf("%i ",y);*/
//*********************************************
//-------------> some exampls <<----------------
/*
int i=1 ,j=2 ,k=3 ,m=2;
 printf( "%d \n", i == 1 ); //1
 printf( "%d \n", j == 3 ); //0
 printf( "%d \n", i >= 1 && j < 4 ); //1
 printf( "%d \n", m <= 99 && k < m ); //0
 printf( "%d \n", j >= i || k == m ); //1
 printf( "%d \n", k + m < j || 3 - j >= k ); //0
 printf( "%d \n", !m ); //0
 printf( "%d \n", !( j - m ) ); //1
 printf( "%d \n", !( k > m ) ); //0
 printf( "%d \n", !( j > k ) ); //1
 */
 
// printf( "%.3f", fabs( 900.0 ) ); //use .nf to detreman the number of no after dot;
//*********************************************
//---------------->> ex at logical operator <<-------------
/*
int x=5 ,y=0 ,z=30;
if (x && y && z++){
	printf("ok ");
}
printf("%i",z); // z=30 ---> y=0 the logecal operator will be false so the compiler not countinue the condithin after that 
               //                  if y !=0 z will be 31 
*/
//************************************************

//--->>peogram to find the char if lower or upper and convert to anther sade by use toggle bitwise operator
/*
char a;
printf("please enter character: ");
scanf("%c",&a);
switch(a)
{
	case 'A' ... 'Z':
	{
	printf("char is upper \n");
	a ^= (1<<5);
	printf("lower of char is %c",a);
	break;
	}
	case 'a' ... 'z':
	{
	 printf("char is lower \n");
	 a ^= (1<<5);
	 printf("upper of char is %c",a);
	 break;
	}
	default:
	printf("nither captal nor small");
}
*/
//*****************************************************
/*

int a=1;
do {
	printf("%i \n",a);
	a++;
}while(a<=10);*/

/*
//**********************************************
//--------->> infinat loop because unsigned char whern i=-1 ------> i=255
unsigned char i=5 ;
for ( ;i>=0 ;i--)
{
	printf("ok");
}*/


 
//*****************************************************
/*
//       --------> ex at use ternaly operator 
int x,y,z;
fflush(stdout);
printf("please enter two number: \n");
fflush(stdin);
scanf("%i %i ",&x,&y);
z= x>y ? x : y;
printf("%i ",z);
*/
//*******************************************
/* -------------------->> ex    
     *
    * *
   * * *
  * * * *
 * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
for (int i=1 ;i<=5 ;i++){
	for (int k=i ;k<=5 ;k++){
		printf(" ");
	}
	for (int c=1 ;c<(i*2) ; c+=2){
		printf("*"" ");
	}
	printf("\n");
}
for (int i=5 ;i>=1 ;i--)
{
	for (int k=i ;k<=5 ;k++)
	{
		printf(" ");
	}
	
	for (int c=1 ;c<(i*2) ; c+=2)
	{
		printf("*"" ");
	}
	printf("\n");
}*/
//************************************************************
/* --------------------->> printf 
*****
*   *
*   *
*   *
*****
for (int i=1 ;i<=5 ;i++ )
{
	for (int j=1 ;j<=5 ; j++)
	{
		if (i==1 || i==5 || j==1 || j==5)
		{
			printf("*");
		}
		else 
			printf(" ");
	}
	printf("\n");
}
*/
//****************************************************
/*
    *
   ***
  *****
    *
    *
    *
    *
    *
    *
for (int i=1 ; i<=9 ;i++)
{
	if (i<=3)
	{
		for (int g=1 ; g<=5-i ;g++)
		{
			printf(" ");
		}
		for (int h=1 ;h <=2*i-1 ;h++)
		{
		   printf("*");	
		}
		
	}
	else
	{
		printf("    *");
	}
	printf("\n");	
}
*/
//***********************************************
//----------->> Separating Digits in an Integer <<-----------
/*
int x;
scanf("%d",&x);
int fr ,sr ,tr;
fr=x%10;
x /=10;
sr=x%10;
x/=10;
tr=x%10;
x/=10;
printf("%d  %d  %d  %d",x,tr,sr,fr);
*/
//*****************************************
/*
int row=10;
int c;
while(row >=1)
{
	c=1;
	while(c<=10)
	{
		printf("%s",row%2 ? "*" : "+");
		c++;
	}
	printf("\n");
	row--;
}
*/

//***************************************
//------------>>calling sum_funcation 
/*
int a,b;
printf("please enter two num: ");
scanf("%i %i",&a,&b);
int z=sum_fun(a,b);
printf("sum of two number= %i",z);
*/
//***********************************************
/*                             //----------------------->> factoral by use for loop
int num, fact=1;
printf("please enter number: \n");
scanf("%i",&num);
for (int i=1 ; i<=num ;i++)
{
	fact*=i;
}
printf("factoral of number %i =%i",num,fact);*/

//*********************************************
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
*/
//********************************************************
/*
int x;
scanf("%d",&x);
int sum=1;
for (int i=1 ; i<=x ; i++ )
{
	int y=x;
	int fact=1;
	for (int h=1 ;h<i ;h++)
	{
		y*=y;	
	}
	
	for (int r=i ;r>=1 ;r--)
	{
		fact*=r;	
	}
	sum+=(y/fact);
}
printf("%d",sum);
*/
//*******************************************************
//----------->> printf from 1 to 10 <<----------------
/*
int n = 1;
while ( n <= 10 ) 
 printf( "%d ", n++ );
*/
//****************************************
//-------->> ex at 1D array <<--------------
/*
int arr[5]={1,2,3,4,5,6}; //no of element > size ---->> warning: excess elements in array initializer 
printf("%d \n",arr[0]);
printf("%d \n",*(arr+0));
printf("%d \n",arr[5]); // to sure the compiler don't damage memory with extra element -->> must print garbag value;
*/
//-----------------------------------------------------------
// the name of array is & of first elemnt in array;
/*
int arr[3];
printf("%p \n",arr); // ==&
printf("%p \n",&arr); //==&
printf("%p \n",&arr[0]); //==&
printf("%p \n",arr+1); //== & of arr+ step of element[4 byte]
printf("%p \n",&arr+1); // == & of arr + step of arr [4* 3 ] byte =12 byte
*/
//************************************************
//------------>> EX at 2D array <<----------------------
/*
int arr_2d [2][3]={{1,2,3},{4,5,6}};
printf("\n %p \n",arr_2d);  //addrese of first element
printf("%p \n",&arr_2d); //addrese of first element
printf("%p \n",arr_2d+1); //== & of arr + step of one array(no of row) [3*4] ==12 byte
printf("%p \n",&arr_2d+1); // == & of arr + step of 2D array [6*4] byte =24 byte
*/
///*************************************************
//---------->>ex at string 
/*
printf("%c \n",'a'); // a
printf("%i \n",'a'); // 97
printf("%p \n","a"); // & in .rodata

printf("%i \n","hello"); // & in .rodata
printf("%c \n",*("hello")); // * & == first char == h
printf("%i \n",*("hello")); // * & == farst char(but int)==104
printf("hello"+1); // & first loction +1 so it print form second char to null char .
*/
//--------------------------------------------------
/*
char string[20];
int x;
scanf("%i",&x);
fflush(stdin); // use it to empt the pafel befor use scanf, if we don't use we cant input string to scanf.
gets(string);
printf("%d \n",x);
puts(string);
*/
//-------------------------------------------
//char name[20];
//name="ahmed"; // --->> error due to (name) is a name of arr it a const PTr that referd to first & in arr[]; 
//----->> use some func of string <<----------
/*
char s1[]="Hello";
char s2[20];
char s3[20];
strcpy(s2,s1); // to copy string s1 in string s2
printf("%s \n",s2); // hello
strncpy(s3,s1,2); // to copy n of char from s1 to s2
s3[2]='\0';
printf("%s \n",s3); // he
char s4[]="World";
strcat(s2,s4); //to conctinate s4 under s2 in memory so s2+=s4
printf("%s \n",s2); //helloworld
int x,y;
x=strcmp(s1,s4); // to comper between two func with case senstive.
printf("%d \n",x); //("hello","world")
y= stricmp(s1,s4); // to comper between two func without case senstive.
printf("%d \n",x); //("hello","world")
*/
//**********************************************************

//printf ("%10s","hello"); // print hello and anther char will be space at lift of litter
//********************************************
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
//********************************************************


  return 0;
}
//******************************************************
//----------> implmntation of sum_funcation
/*
int sum_fun(int x ,int y)
{
	int sum;
	sum=x+y;
	return sum ;
}*/
