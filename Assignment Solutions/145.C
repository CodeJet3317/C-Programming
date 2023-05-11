#include<stdio.h>
#include<conio.h>
void main()
{
	float si(float,float,float);
	float p,r,n,i;
	clrscr();
	printf("ENTER THE P : ");
	scanf("%f",&p);
	printf("ENTER THE R : ");
	scanf("%f",&r);
	printf("ENTER THE N : ");
	scanf("%f",&n);

	i=si(p,r,n);

	printf("%.2f",i);

	getch();
}
float si(float a,float b,float c)
{
	float d;
	d=a*b*c/100;
	return d;
}