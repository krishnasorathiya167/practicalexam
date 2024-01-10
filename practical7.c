#include<stdio.h>

main()
{
	int i,j,c=11;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",c);
			c++;
		}
		printf("\n");
	}
}
