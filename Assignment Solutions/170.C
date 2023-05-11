#include<stdio.h>
#include<conio.h>
void main()
{
	float a,c,*pa,*pc;
	clrscr();

	pa=&a;

	pc=&c;
	printf("Enter NUMBER :");
	scanf("%f",pa);


	*pc = *pa * *pa;
	printf("SQUARE OF NO : %.f",*pc);

	getch();
}