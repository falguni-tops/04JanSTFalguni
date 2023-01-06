#include<stdio.h>
main()
{
	int i,n,table;
	
   printf("enter value of n");
   scanf("%d",&n);
   
   for(i=1;i<=10;i++)
   
   {
   
   	table=n*i;
   printf("%d*%d=%d\n",n,i,table);	
   	
   }
}
