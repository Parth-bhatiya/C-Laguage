#include<stdio.h>
#include<conio.h>

/*
	Operator :
		Operators are the symbols which helps to perform
		mathematical or logical oprations on operands.

	Types of operator :

		1. Unary  (single operands)
		2. Binary (double operands)
		3. Ternory (more than two oprrater)

*/

main()
{
	int i,j,sum=0;
	clrscr();
	//1.unary

	printf("Enter any number : ");
	scanf("%d",&i);

	i++;
	printf("Increment one vlue : %d \n\n",i);

	//2. Binary

	printf("Enter any number : \n");
	scanf("%d %d",&i,&j);

	sum = i + j;

	printf("Sum of two number : %d",sum);

	//3 ternory

	getch();
}