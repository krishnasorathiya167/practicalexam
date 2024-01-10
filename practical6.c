#include<stdio.h>

main()
{
	int *p,i;
	char data[1000];
	p = fopen("practical6.txt","w");
	
	if(p==0)
	{
		printf("file not open");
	}
	else
	{
		printf("Enter write 3 Employee Name = \n");
		for(i=0;i<3;i++)
		{
		gets(data);
		fputs(data,p);
		}
		printf("Data Add Successfully");
	}
	fclose(p);
}