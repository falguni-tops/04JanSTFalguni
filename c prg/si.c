#include<stdio.h>
main()
{
	int p,r,n,ans;
	
	printf("ENTER VALUE OF P: ");
    scanf("%d",&p);
	
	printf("ENTER VALUE OF R: ");
	scanf("%d",&r);
	
	printf("ENTER VALUE OF N: ");
	scanf("%d",&n);
	
	ans=p*r*n/100;
	
	printf("ANS=%d",ans);
		
}
