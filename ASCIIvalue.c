// write a program to print all the ASCII value and their equivalent character using a while loop .the ASCII vary from 0 to 255.







#include <stdio.h>
 
int main()
{
	int i=1;
	while(i<=255)
	{
	printf("%d=%c\n",i,i);
	i++;
	}
	return 0;
}
 
