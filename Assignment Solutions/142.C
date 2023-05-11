#include<stdio.h>
#include<conio.h>
void main()
{
	float art(float,float);
	float a,b,c;
	clrscr();

	printf("ENTER THE BASE : ");
	scanf("%f",&a);
	printf("ENTER THE HEIGHT : ");
	scanf("%f",&b);



	c=art(a,b);

	printf("AREA OF TRIANGLE : %.2f",c);



	getch();
}
float art(float a,float b)
{
	float c;
	c=(a*b)/2;
	return c;
}

