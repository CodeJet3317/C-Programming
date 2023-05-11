#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,*pa,*pb,*pc;
	clrscr();

	pa=&a;
	pb=&b;
	pc=&c;
	printf("Enter 1st Number:");
	scanf("%d",pa);

	printf("Enter 2nd Number:");
	scanf("%d",pb);

	*pc = *pa + *pb;
	printf("Sum: %d",*pc);

	getch();
}