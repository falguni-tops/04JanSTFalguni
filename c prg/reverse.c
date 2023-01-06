#include<stdio.h>
main()
{
	int i,num, reverse=0,rem;
	
	printf("ENTER NUMBER : ");
	scanf("%d",&num);
	
	for(i=0;num!=0;i++)
	{
		rem=num%10;
		reverse=reverse*10+rem;
		num/=10;
		
	}
	printf("REVERSE NUMBER IS %d",reverse);
}

