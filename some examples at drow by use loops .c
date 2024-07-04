#include <stdio.h>

int main()
{
/*	
//***************************
//+++++++++++++++++++++++++++
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


}