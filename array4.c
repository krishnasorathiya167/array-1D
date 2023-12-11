#include<stdio.h>

main()
{
	int i,n,sum;
	
	printf("Enter OF Array = ");
	scanf("%d",&n);
	
	int a[n],b[n],c[i];
	printf("Enter Of Element in first Array = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter Of Element in secound Array = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&b[i]);
	}
	printf("Sum Of These Two Array = \n");
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		printf("%d\n",c[i]);
	}
}