
#include<stdio.h>
#include<conio.h>
void main()
{       float ar(float *);
	float a,b,c,*pa,*pb,*pc;
	clrscr();
	pa=&a;
	pb=&b;
	pc=&c;
	printf("ENTER THE RADIUS : ");
	scanf("%f",pa);

	*pc=ar(pa);
	printf("AREA OF CIRCLE : %.2f",*pc);

	getch();
}
float ar(float *a)
{
	float c;
	c = *a * *a * 3.14;
	return c;
}