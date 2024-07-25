#include <stdio.h>

int main()
{
	char a;
	printf("Enter a charater: ");
	scanf("%c",&a);
	if((a>=97&&a<=122)||(a>=65&&a<=90))
	{
		printf("%c is an alphapet",a);
	}
	else 
	{
		printf("%c is not an alphapet",a);
	}

	return 0;
}