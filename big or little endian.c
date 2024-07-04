#include <stdio.h>

int main()
{
//------------->> to show compilier run as big or little endian
  
    unsigned int value = 1;
    if (*((char*)&value) == 1) //--->> mean the first byte in int if ==1 
	{
        printf("Little-Endian\n");
    } else {
        printf("Big-Endian\n");
    }


}