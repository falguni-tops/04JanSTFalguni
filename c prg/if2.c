#include<stdio.h>
main()
{
	int number;
	
	printf("ENTER NUMBER : ");
	scanf("%d",&number);
	
	if(number%2==0)
	{
		printf("EVEN");
	}
	else
	{
		printf("ODD");
	}
}
