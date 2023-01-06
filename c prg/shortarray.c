#include<stdio.h>
main()
{
	int i,j,temp;
	int a[10]={100,22,3,14,15,60,7,87,95,10};
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("sorting decriment list\n :");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
}
