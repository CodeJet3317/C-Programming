#include<stdio.h>
#include<conio.h>
void main()
{
	int a[60],*pa;
	int i,n,*pn;
	clrscr();
	pn=&n;
	pa=&a[0];
	printf("ENTER THE SIZE : ");
	scanf("%d",pn);
	for (i=0;i<*pn;i++)
	{
		printf("ENTER THE ELEMENT : ");
		scanf("%d",(pa+i));
	}
	for (i=0;i<*pn;i++)
	{
		printf("\n%d",*(pa+i));
	}


	getch();
}