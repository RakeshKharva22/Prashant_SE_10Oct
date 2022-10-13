#include<stdio.h>

void main()
{
	int a,b,choice;
	
	printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\Choice Calculator\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
	
	printf("\nEnter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	printf("\nA = %d, B = %d",a,b);
	printf("\n\nPress 1. Addition\nPress 2.Subtraction\nPress 3.Mulitplication\nPress 4.Division");
	printf("\n\nEnter your choice?");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : printf("\nAddition : %d",(a+b));
				break;
		case 2 : printf("\nSubtraction : %d",(a-b));
				break;
		case 3 : printf("\nMultiplication : %d",(a*b));
				break;
		case 4 : printf("\nDivision : %.2f",(a/(float)b));
				break;
		default:printf("\nInvalid Choice.");
				break;	
	}
	
	
}
