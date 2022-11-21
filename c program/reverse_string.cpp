#include<stdio.h>
#include<string.h>
main()
{
	char s[10];
	printf("\n Enter String = ");
	gets(s);
	
	printf("\n string is = %s",s);
	
	strrev(s);
	printf("\n Reverse string is = %s",s);
}
