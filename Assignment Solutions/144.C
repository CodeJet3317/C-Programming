#include<stdio.h>
#include<conio.h>
void main()
{
	float art(float,float);
	float a,b,c;
	clrscr();

	printf("ENTER THE A : ");
	scanf("%f",&a);
	printf("ENTER THE B : ");
	scanf("%f",&b);



	c=art(a,b);

	printf("AREA OF ELLIPSE : %.2f",c);



	getch();
}
float art(float a,float b)
{
	float c;
	c=a*b*3.14;
	return c;
}

