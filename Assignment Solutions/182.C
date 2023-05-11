
#include<stdio.h>
#include<conio.h>
void main()
{       float ar(float *,float *,float *);
	float a,r,n,c,*pa,*pn,*pr,*pc;
	clrscr();
	pa=&a;
	pr=&r;
	pc=&c;
	printf("ENTER THE P : ");
	scanf("%f",pa);
	printf("ENTER THE R : ");
	scanf("%f",pr);
	printf("ENTER THE N : ");
	scanf("%f",pn);

	*pc=ar(pa,pr,pn);
	printf("SIMPLE INTEREST : %.2f",*pc);

	getch();
}
float ar(float *a,float *r,float *n)
{
	float c;
	c = *a * *r * *n /100;
	return c;
}