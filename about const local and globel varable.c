#include <stdio.h>

const int const_global=10;
int main()
{
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

}