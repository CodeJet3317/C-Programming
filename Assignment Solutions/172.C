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
	printf("Enter S1 :");
	scanf("%f",pa);
	printf("Enter S2 :");
	scanf("%f",pr);
	printf("Enter S3 :");
	scanf("%f",pn);


	*pc = (*pa + *pr + *pn) /2;
	printf("DAIMETER : %.2f",*pc);

	getch();
}