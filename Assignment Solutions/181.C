
#include<stdio.h>
#include<conio.h>
void main()
{       float ar(float *);
	float a,b,c,*pa,*pb,*pc;
	clrscr();
	pa=&a;
	pb=&b;
	pc=&c;
	printf("ENTER THE NO : ");
	scanf("%f",pa);

	*pc=ar(pa);
	printf("SQUARE : %.f",*pc);

	getch();
}
float ar(float *a)
{
	float c;
	c = *a * *a;
	return c;
}