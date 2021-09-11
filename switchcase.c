#include<stdio.h>
int main()
{
	printf("SELECT A NUMBER: \n1 \n2 \n3 \n4 \n5\n");
	printf("----------------\n");
	int ch=0;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("FOOD ITEM - FRENCH FRIES\nPRICE - Rs.99");
			break;
		case 2:
			printf("FOOD ITEM - BURGER\nPRICE - Rs.129");
			break;
		case 3:
			printf("FOOD ITEM - SANDWICH\nPRICE - Rs.149");
			break;
		case 4:
			printf("FOOD ITEM - PASTA\nPRICE - Rs.179");
			break;
		case 5:
			printf("FOOD ITEM - PIZZA\nPRICE - Rs.239");
			break;
		default:
			printf("INVALID CHOICE");
	}
}

