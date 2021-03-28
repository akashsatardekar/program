#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number (in a range of 1 - 5) : ");
	scanf("%d", &n);
	switch(n)
	{
		case 1:	
		{
			printf("Food Item - Pizza\nPrice - Rs 239");
			break;
		}		
		case 2:
		{
			printf("Food Item - Pasta\nPrice - Rs 179");
			break;
		}
		case 3:
		{
			printf("Food Item - sandwich\nPrice - Rs 149");
			break;
		}
		case 4:	
		{		
			printf("Food Item - Burger\nPrice - Rs 129");
			break;
		}
		case 5:
		{
			printf("Food Item - French Fries\nPrice - Rs 99");
			break;			
		}
		default:
		{
			printf("Enter proper value");
			break;
		}
			
	}
	return 0;
}
