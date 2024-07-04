
#include <stdio.h>

int main()
{

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


}