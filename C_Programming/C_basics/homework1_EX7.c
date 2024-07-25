#include <stdio.h>

int main()
{
	float a,b,c;
	printf("Enter value of A: ");
	scanf("%f",&a);
	printf("Enter value of B: ");
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, value of a = %f \nAfter swapping, value of b = %f" , a , b);

	return 0;
}