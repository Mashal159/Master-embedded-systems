#include <stdio.h>

int main()
{
	int n,factorial=1;
	printf("Enter an integer: ");
	scanf("%d",&n);
	if (n<0) printf("eror!!! factorial of negative number doesn't exist");
	else if (n==0) printf("factorial = 1");
	else
	{
    	for(int i=1;i<=n;i++)
    	{
    	    factorial*=i;
    	}
        printf("factorial = %d",factorial);
    	return 0;
	}
}