#include <stdio.h>

int main()
{
	int a;
	printf("Enter a numbers: ");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is positive",a);
	}
	else if(a<0)
	{
		printf("%d negative",a);
	}
	else
	{
		printf("you entered zero");
	}

	return 0;
}
