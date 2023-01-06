#include<stdio.h>
main()
{
	int month;
	
	printf("ENTER MONTH : ");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1:
			printf("JANUARY");
			break;
			
			case 2:
				printf("FABRUARY");
				break;
				
				case 3:
					printf("MARCH");
					break;
					
					default:
						printf("SOMETHING IS WRONG");
	}
}
