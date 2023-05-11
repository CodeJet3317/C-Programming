
#include<stdio.h>
#include<conio.h>
struct std
{
	int r,st;
	char na[50];
	int m1,m2,m3,to;
};
void main()
{

	int i,n,*pn;
	struct std s[50],*ps;
	pn=&n;
	ps=&s[0];

	clrscr();

	printf("ENTER THE SIZE : ");
	scanf("%d",pn);

	for (i=0;i<*pn;i++)
	{
		printf("ENTER THE ROLL NO :");
		scanf("%d",&(ps+i)->r);
		printf("ENTER THE NAME :");
		scanf("%s",&(ps+i)->na);
		printf("ENTER THE STD :");
		scanf("%d",&(ps+i)->st);

		printf("ENTER THE MARKS 1 :");
		scanf("%d",&(ps+i)->m1);
		printf("ENTER THE MARKS 2 :");
		scanf("%d",&(ps+i)->m2);
		printf("ENTER THE MARKS 3 :");
		scanf("%d",&(ps+i)->m3);

	}


	printf("\tROLL NO");
	printf("\tNAME");
	printf("\tSTD");
	printf("\tMARKS 1");
	printf("\tMARKS 2");
	printf("\tMARKS 3");
	printf("\tTOTAL");


	for (i=0;i<*pn;i++)
	{

		(ps+i)->to=(ps+i)->m1+(ps+i)->m2+(ps+i)->m3;
		printf("\n\t%d",(ps+i)->r);
		printf("\t%s",(ps+i)->na);
		printf("\t%d",(ps+i)->st);
		printf("\t%d",(ps+i)->m1);
		printf("\t%d",(ps+i)->m2);
		printf("\t%d",(ps+i)->m3);
		printf("\t%d",(ps+i)->to);

	}
	getch();
}
