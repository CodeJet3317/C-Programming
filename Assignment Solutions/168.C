#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,*pa,*pb,*pc;
	clrscr();

	pa=&a;
	pb=&b;
	pc=&c;
	printf("Enter LENGTH :");
	scanf("%d",pa);

	printf("Enter BREADTH :");
	scanf("%d",pb);

	*pc = *pa * *pb;
	printf("AREA OF RECTANGLE : %d",*pc);

	getch();
}