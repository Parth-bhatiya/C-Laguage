#include<stdio.h>
#include<conio.h>

/*
	meaning:
		=> It is used to take ipnut from the user.
	syntax:

		=> scanf("%d",&input);

*/

main()
{
	int input;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&input);

	printf("This is number : %d ",input);

	getch();
}