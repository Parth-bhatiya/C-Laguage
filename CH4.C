#include<stdio.h>
#include<conio.h>

/*
	if else :
		The if-else statement is a decision-making statement
		that is used to decide whether the part of the code
		will be executed or not based on the specified condition
		if the given condition is true, then the code inside the
		if block is executed, otherwise the code inside the else
		block id executed.

	syntax :
		if(condition)
		{

		}
		else
		{

		}

*/
main()
{
	int i,j;
	clrscr();

	printf("Find the minimum vlue\n");

	printf("Enter number of 1 : ");
	scanf("%d",&i);
	printf("Enter number of 2 : ");
	scanf("%d",&j);

	if(i>j)
	{
		printf("The minimum value is : %d",j);
	}
	else
	{
		printf("the minimum vlue is : %d",i);
	}

	getch();
}