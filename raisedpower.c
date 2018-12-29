#include <stdio.h>
 
int main()
{
	int a,b,res=1;
	
	scanf("%d%d",&a,&b);
    printf("the value of a,b is %d,%d respectively\n",a,b);
	while(b>0)
			{
				res=res*a;
				b--;
			}
				printf("res is %d",res);
	
	return 0;
}
 

 
