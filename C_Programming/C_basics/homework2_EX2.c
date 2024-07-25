#include <stdio.h>

int main()
{
	char a;
	printf("Enter an alphapet: ");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	{
	    printf("%c is a vowel",a);
	}
	else
	{
	    printf("%c is a consonant",a);
	}
	
	return 0;
}