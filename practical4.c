#include<stdio.h>

main()
{
	int i,n,a[100];
	int *p;
	p=&a[i];
	
	printf("Enter Array Size = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Cube Of = \n");
	
	int p1;
	
	for(i=0;i<n;i++)
	{
		p = &a[i];
		printf("%d\n",*p**p**p);
	}
	
}