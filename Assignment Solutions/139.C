#include<stdio.h>
#include<conio.h>
void main()
{
	float sq(float);
	float a,c;
	clrscr();

	printf("ENTER THE NO : ");
	scanf("%f",&a);



	c=sq(a);

	printf("SQUARE : %.2f",c);



	getch();
}
float sq(float a)
{

	return a*a;
}

