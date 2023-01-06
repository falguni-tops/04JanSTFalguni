#include<stdio.h>
main()
{
	int marks;
	
	printf("ENTER NUMBER : ");
	scanf("%d",&marks);
	if (marks>80 && marks<=100 )
	{
		printf("A Grade");
	}
	else if(marks>60 && marks<=80)
	{
		printf("B Grade");
	}
	else if(marks>35 && marks<=60)
	{
		printf("C Grade");
	}
	else
	{
		printf("FAIL");
	}
}
