#include<stdio.h>
#include<conio.h>
void main()
{
	    int i,n,s=1,*pn,*ps;
	clrscr();

	pn=&n;
	ps=&s;

	printf("ENTER THE LIMIT : ");
	scanf("%d",pn);
	for (i=1;i<=*pn;i++)
	{
		*ps*=i;
	}
	printf("FACTORIAL : %d",*ps);

	getch();

}