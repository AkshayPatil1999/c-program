#include<stdio.h>
struct laptop
{
	int laptopid;
	char laptopname[10];
	float laptopprice;
	
};
main()
{
	struct laptop l[10];
	int i,n;
	printf("\n enter no of records = ");
	scanf("%d",&n);
	
	printf("\n Enter laptopid,laptopname,laptopprice = ");
	for(i=0;i<n;i++)
	{
		scanf("%d%s%f",&l[i].laptopid,&l[i].laptopname,&l[i].laptopprice);
	}
	
	printf("\n laptopid\t laptopname\t laptopprice");
	for(i=0;i<n;i++)
	{
		printf("\n %d \t\t%s \t\t%f",l[i].laptopid,l[i].laptopname,l[i].laptopprice);
	}
}
