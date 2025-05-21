/*
Data types :

1. int numerical's without decimal point - control String %d 2byte
2. long - control string %ld 4byte
3. float - control string %f 4byte
4. double - control string %lf 8byte
5. char - single character at a time control string %c 1byte

Variable : It is a data name and is used to store the data value.
int a=10;

1. Must start with an alphabet
2. Upper case and lower case are significant
ASCII : American Standard Code For Information Interchange
a-z : 97 to 122
A-Z : 65 to 90
3. Keyword is not allowed as a variable name
4. Space is not allowed between variable name
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	float a,b,c;
	clrscr();
	a=77878787;
	b=2;
	c=a+b;
	printf("Addition : %f",c);
	c=a-b;
	printf("\nSubtraction : %f",c);
	c=a*b;
	printf("\nMultiplication : %f",c);
	c=a/b;
	printf("\nDivision : %f",c);
	getch();
}








