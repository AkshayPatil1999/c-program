#include<stdio.h>
int factorial(int n);
main()
{
	int n,f;
	printf("\n enter number:");
	scanf("%d",&n);
f=factorial(n);
	printf("Factrorial=%d",f);
}
	int factorial(int n)
	{
		int f;
		if(n==1)
		{
			return (1);
		}
		else
		{
			f=n*factorial(n-1);
		}
		return f;
	}
