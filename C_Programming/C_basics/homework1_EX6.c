#include <stdio.h>

int main()
{
	float a,b,c;
	printf("Enter value of A: ");
	scanf("%f",&a);
	printf("Enter value of B: ");
	scanf("%f",&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping, value of a = %f \nAfter swapping, value of b = %f" , a , b);

	return 0;
}