#include<stdio.h>

struct book{
	char title[100];
	char author[100];
	int price;
};

main()
{
	int n;
	
	printf("Enter Book Number = ");
	scanf("%d",&n);
	
	struct book s[n];
	
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("\nbook Title = ");
		scanf("%s",&s[i].title);
		printf("Book Author = ");
		scanf("%s",&s[i].author);
		printf("Book Price = ");
		scanf("%d",&s[i].price);
	}
	printf("\nBook Details:-\n");
	
	for(i=0;i<n;i++)
	{
		printf("\nBook Title = %s\n",s[i].title);
	    printf("Book Author = %s\n",s[i].author);
		printf("Book Price = %d\n",s[i].price);
	}
	
		
}