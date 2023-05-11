#include<stdio.h>
#include<conio.h>
void main()
{
	int arr(int,int);
	int a,b,c;
	clrscr();

	printf("ENTER THE LENGTH : ");
	scanf("%d",&a);
	printf("ENTER THE BREADTH : ");
	scanf("%d",&b);



	c=arr(a,b);

	printf("AREA OF RECTANGLE : %d",c);



	getch();
}
int arr(int a,int b)
{
	int c;
	c=a*b;
	return c;
}

