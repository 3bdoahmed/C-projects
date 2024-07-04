#include <stdio.h>

int main()
{

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

//**********************************************
//--------->> infinat loop because unsigned char whern i=-1 ------> i=255
/*
unsigned char i=5 ;
for ( ;i>=0 ;i--)
{
	printf("ok");
}*/

//*****************************************************
//---->> ex at do while to print form 1 to 10
/*

int a=1;
do {
	printf("%i \n",a);
	a++;
}while(a<=10);*/

/*

//--------------------->> EX at switch case 
//peogram to find the char if lower or upper and convert to anther sade by use toggle bitwise operator
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

}