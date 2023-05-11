
#include<stdio.h>
#include<conio.h>
void main()
{       int sum(int *,int *);
	int a,b,c,*pa,*pb,*pc;
	clrscr();
	pa=&a;
	pb=&b;
	pc=&c;
	printf("ENTER THE NO 1 : ");
	scanf("%d",pa);
	printf("ENTER THE NO 2 : ");
	scanf("%d",pb);

	*pc=sum(pa,pb);
	printf("SUM : %d",*pc);

	getch();
}
int sum(int *a,int *b)
{
	int c;
	c = *a + *b;
	return c;
}