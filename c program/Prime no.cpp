#include<stdio.h>
main()
{
	int i,n,count=0;
	printf("\n Enter No = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++);
	
	{
		if(n/i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("\n it is prime no ");
	}
	else
	{
		printf("\n it is not prime no ");
	}
}
