#include <stdio.h>

int main()
{
//------------>> EX at 2D array <<----------------------
/*
int arr_2d [2][3]={{1,2,3},{4,5,6}};
printf("\n %p \n",arr_2d);  //addrese of first element
printf("%p \n",&arr_2d); //addrese of first element
printf("%p \n",arr_2d+1); //== & of arr + step of one array(no of row) [3*4] ==12 byte
printf("%p \n",&arr_2d+1); // == & of arr + step of 2D array [6*4] byte =24 byte

}