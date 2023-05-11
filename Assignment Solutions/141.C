#include<stdio.h>
#include<conio.h>
void main()
{
	int asq(int);
	int a,c;
	clrscr();

	printf("ENTER THE LENGTH : ");
	scanf("%d",&a);



	c=sq(a);

	printf("AREA OF SQUARE : %d",c);



	getch();
}
int sq(int a)
{

	return a*a;
}

