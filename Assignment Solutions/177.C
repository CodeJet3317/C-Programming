
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[60],*pa;
	int i,j,n,t,m,*pn,*pt,*pm;
	clrscr();
	pn=&n;
	pm=&m;
	pt=&t;


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
	for (i=0;i<*pn;i++)
	{
		for(j=0;j<*pn;j++)
		{
			if (*pt<*(pa+i))
			{
				*pt=*(pa+i);
				*(pa+i)=*(pa+j);
				*(pa+j)=*pt;

			}
			if (*pm>*(pa+i))
			{
				*pm=*(pa+i);
				*(pa+i)=*(pa+j);
				*(pa+j)=*pm;

			}

		}
	}
	printf("MAX : %d",*pt);
	printf("MIN : %d",*pm);




	getch();
}