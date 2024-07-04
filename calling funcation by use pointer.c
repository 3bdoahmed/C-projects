#include <stdio.h>

int sum (int a, int b)
{
	return a+b;
}
int (*ptr_sum) (int , int )=NULL;

int main()
{
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
  
 

}