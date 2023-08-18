#include<stdio.h>
#include<conio.h>

/*
	if else ladder :
		if, else if ladder in C programming is used to test a
		series of conditions sequentially. furthermore, if a
		condition is tested only when all previous if conditions
		in the if-else ladder are false. if any of the conditional
		expressions evaluate to be true, the appropriate code
		block will be executed, and the entire if-else ladder will
		be terminated.

	Syntax :
		if(condition)
		{

		}
		else if(Condition)
		{

		}

*/

main()
{
	int i;
	clrscr();

	printf("Find given number is negative,neutral and positive ?\n\n");

	printf("Enter your number : ");
	scanf("%d",&i);

	if(i<0)
	{
		printf("This number is Negative");
	}
	else if(i==0)
	{
		printf("This number is Netural");
	}
	else if(i>0)
	{
		printf("This number is positive");
	}

	getch();
}