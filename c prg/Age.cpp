#include<stdio.h>
main()
{
	int age;
	printf("enter your age");
	scanf("%d",&age);
if 	(age>14)
{
	if (age>=18)
	{
	printf("Adult");
    }
    else
    {
    	printf("Teenager");
	}
}
else
{
	if(age<5)
    {
		printf("child");
	}
	else
	{
		printf("SOMETHING IS WRONG");
	}
}
}
