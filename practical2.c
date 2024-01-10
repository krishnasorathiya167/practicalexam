#include<stdio.h>

main()
{
	int i,a[100],n,sum=0;
	
	printf("Enter Value Array = ");
	scanf("%d",&n);
	
	printf("Array Of Element = \n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n---------------\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	printf("\nSum Of All Array = %d",sum);
	
}