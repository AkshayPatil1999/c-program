#include<stdio.h>
int fact(int n);
main()

//with parameter and with return type

{
	int ans,n;
	printf("\n Enter a number = ");
	scanf("%d",&n);
	printf("\n");
	ans=fact(n);
	printf(" Factorial = %d",ans);

}

int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f* i;
	}
	return f;
}
