#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter number A :");
	scanf("%d",&a);
	
	printf("ENTER NUMBER B : ");
	scanf("%d",&b);
	
	printf("ENTER NUMBER C :");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf(" A IS GRATER");
		}
		else
		{
			printf("C IS GRATER");
		}
	}
	else
	{
		if(b>c)
		{
			printf("B IS GRATER");
		}
		else
		{
			printf("C IS GRATER");
		}
	}
}
