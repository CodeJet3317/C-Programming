#include<stdio.h>
#include<conio.h>
void main()
{
	float a,r,n,c,*pa,*pr,*pn,*pc;
	clrscr();


	pa=&a;
	pr=&r;
	pn=&n;
	pc=&c;
	printf("Enter P :");
	scanf("%f",pa);
	printf("Enter R :");
	scanf("%f",pr);
	printf("Enter N :");
	scanf("%f",pn);


	*pc = *pa * *pr * *pn /100;
	printf("SIMPLE INTEREST : %.2f",*pc);

	getch();
}