#include<stdio.h>
main()
{
	int day;
	
	printf("ENTER DAY : ");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("SUNDAY ");
			break;
			
			case 2:
				printf("MONDAY");
				break;
				
				case 3:
					printf("TUESDAY");
					break;
					
					default:
						printf("ENTER VALID NUMBER");
	}
}
