
#include<stdio.h>
#include<conio.h>
void main()
{       int ar(int *,int *);
	int a,b,c,*pa,*pb,*pc;
	clrscr();
	pa=&a;
	pb=&b;
	pc=&c;
	printf("ENTER THE LENGTH : ");
	scanf("%d",pa);
	printf("ENTER THE BREADTH : ");
	scanf("%d",pb);

	*pc=ar(pa,pb);
	printf("AREA OF RECTANGLE : %d",*pc);

	getch();
}
int ar(int *a,int *b)
{
	int c;
	c = *a * *b;
	return c;
}