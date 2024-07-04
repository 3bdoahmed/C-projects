#include <stdio.h>
#include <string.h>
int main()
{
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

}