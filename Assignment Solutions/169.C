#include<stdio.h>
#include<conio.h>
void main()
{
	float a,c,*pa,*pc;
	clrscr();

	pa=&a;

	pc=&c;
	printf("Enter RADIUS :");
	scanf("%f",pa);


	*pc = *pa * *pa * 3.14;
	printf("AREA OF CIRCLE : %.2f",*pc);

	getch();
}