#include <stdio.h>

int main()
{
	float a,b;
	char op;
	printf("Enter operator either + or - or * or /: ");
	scanf("%c",&op);
	printf("enter two operands:");
	scanf("%f", &a);
	scanf("%f", &b);
	switch (op){
	    case '+':
    	    printf("a %c b = %f" , op , a+b);
    	    break;
	    case '-':
    	    printf("a %c b = %f" , op , a-b);
    	    break;
	    case '*':
    	    printf("a %c b = %f" , op , a*b);
    	    break;
	    case '/':
    	    printf("a %c b = %f" , op , a/b);
    	    break;
	}
	
    return 0;
}