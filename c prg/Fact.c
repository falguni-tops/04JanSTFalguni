#include<stdio.h>
main()
{
	int i,n,fact=1;
 printf("Enter The Value");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
 	fact=fact*i;
 }
 printf("Factorial Of %d is = %d\n",n,fact);
}
