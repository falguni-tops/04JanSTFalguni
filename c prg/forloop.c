#include<stdio.h>
main()
{
	int num,i,j,k;
	
	printf("enter avalue of num=");
	scanf("%d",&num);
	
	for(i=num;i>=0;i--)
	 {
	 	for(k=0;k<=num-i;k++)
	 	{
	 		printf(" ");
	 	}
		 	for(j=0;j<=i;j++)
	 		{
	 			printf(" *");
			 }
			 printf("\n");
			 
		 
	 }
	 for(i=0;i<=num;i++)
	 {
	 	for(k=0;k<=num-i;k++)
	 	{
	 		printf(" ");
	 	}
		 	for(j=0;j<=i;j++)
	 		{
	 			printf(" *");
			 }
			 printf("\n");
			 
		 
	 }
	  
}
