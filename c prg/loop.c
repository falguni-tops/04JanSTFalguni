/*1
10
101
10101*/

#include<stdio.h>
main()
{
	int i,j,n;
	
	printf("enter value of n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;++i)
	{
		for(j=1;j<=i;++j)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
}


