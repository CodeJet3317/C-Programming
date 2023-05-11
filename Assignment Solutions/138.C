#include<stdio.h>
#include<conio.h>
void main()
{
	int sum(int,int);
	int a,b,c;
	clrscr();

	printf("ENTER THE NO 1 :");
	scanf("%d",&a);

	printf("ENTER THE NO 2 :");
	scanf("%d",&b);

	c=sum(a,b);

	printf("%d",c);



	getch();
}
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}