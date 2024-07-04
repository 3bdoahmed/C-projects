
#include <stdio.h>

int main()
{

//-------------->>  this code is evluate according to presedance <<----------------------
/*
int x=2 ,y;
y= (x<<2) + ++x ; // (x<<2) the first evluate so 2<<2 +3
printf("%i ",y);
*/
//------------------------------------
/*
int x=2 ,y=5;
y= x<<2 + ++x ; // y = x<< 2 +3 = 3<<5  so y=96; in this case the opertion will eveluate from R------>L
printf("%i ",y);*/

//*************************************************
//------------------>> ex at presedance of some operator 
/*
int x= (5,6,7); //according to presedance x=7
printf("%i \n",x);

int y= 5,6,7; //sentix error
printf("%i \n",y);

int z;
z= 5,6,7;
printf("%i \n",z); // according to presedance = higher than , so output=5


int x= (printf("abdelrahman \n"),8); //--->according to presedance x=8 but printf will done in frist
printf("%i",x);

*/

//************************************
//printf ("%d",sizeof(printf("abdoahmed")));
}