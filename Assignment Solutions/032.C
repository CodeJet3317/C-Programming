#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	float p=3.14,n,r,l,b;
	clrscr();
	printf("1.CIRCLE\n2.RECTANGLE\n3.SQUARE\nENTER CHOICE:");
	scanf("%d",&a);



	switch(a)
	{
		case 1:
		printf("ENTER RADIUS");
		scanf("%f",&r);
		n=p*r*r;
			printf("Area:%.2f",n);
			break;
		case 2:
	printf("ENTER LENGTH");
	scanf("%f",&l);
	printf("ENTER BREADTH");
	scanf("%f",&b);

		n=l*b;
			printf("Area:%.2f",n);
			break;
		case 3:
			printf("ENTER LENGTH");
			scanf("%f",&l);

		n=l*l;
			printf("Area:%.2f",n);
			break;

	}
	getch();

	}



