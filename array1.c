#include<stdio.h>

main()
{
	
	int i,n;
	
	printf("size Of Array =");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter Value Element = \n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	
}