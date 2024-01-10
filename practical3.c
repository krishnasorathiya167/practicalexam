#include<stdio.h>

main()
{
	int i,a[100],n,sum=0;
	
	printf("Enter Array size = ");
	scanf("%d",&n);
	
	printf("Array Of Element = \n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nReverse Array = \n");
	
	for(i=n-1;i>=0;i--)
	{
		printf("%d \n",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	printf("\nSum Of All Array = %d",sum);
	
}