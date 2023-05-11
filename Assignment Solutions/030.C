#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,s;
	clrscr();
	printf("1.SQUARE \n2.CUBE");
	printf("\nENTER CHOICE :");
	scanf("%d",&a);
	printf("Enter no:");
	scanf("%d",&n);
	switch(a)

	{
		case 1:
			s=n*n;
			printf("Square:%d",s);
			break;
		case 2:
			s=n*n*n;
			printf("Cube:%d",s);
			break;



	}

	getch();
}