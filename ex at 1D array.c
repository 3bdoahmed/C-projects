#include <stdio.h>

int main()
{
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
}