#include<stdio.h>

//without return type without pramter

void largest();
main()

{
	largest();	
}
void largest()

{
	int a,b,c;
	printf("Enter a number = \n");
	scanf("%d%d%d",&a,&b,&c);
    

	if(a>=b && a>=c)      
	printf("The largest number is %d",a);
	else if(b>=c && b>=a) 
		printf("The largest number is %d",b);
	else            
		printf("The largest number is %d",c);      
}
