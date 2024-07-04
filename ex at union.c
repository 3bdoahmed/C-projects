#include <stdio.h>


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
}