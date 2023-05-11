#include<stdio.h>
#include<conio.h>
void main()
{
	float sq(float);
	float a,c;
	clrscr();

	printf("ENTER THE RADIUS : ");
	scanf("%f",&a);



	c=sq(a);

	printf("AREA OF CIRCLE : %.2f",c);



	getch();
}
float sq(float a)
{

	return a*a*3.14;
}

