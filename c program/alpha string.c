#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	int alpha,digit,ssymbol,i=0;
	printf("\n enter the range= ");
	get(str);
	while(str[i]!='\0');
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]>='A'&&str[i]<='Z'))
		alpha++;
		else if((str[i]>='0'&&str[i]<='9'))
		digit++;
		else
		ssymbol++;
	}
	printf("\n number of alphabets in the string=%d",alpha);
	printf("\n number of digits in the string=%d",digit);
	printf("\n number of ssymbol in the string=",ssymbol);
	return 0;
}
