#include<stdio.h>
#include<conio.h>

struct book
{
	int no,pr;
	char na[50],au[50],pu[60];
};

void main()
{
	int i,n,*pn;
	struct book s[50],*ps;
	clrscr();
	pn=&n;
	ps=&s[0];

	printf("Enter Size:");
	scanf("%d",pn);

	for(i=0;i<*pn;i++)
	{
		printf("ENTER THE NO : ");
		scanf("%d",&(ps+i)->no);
		printf("ENTER THE NAME : ");
		scanf("%s",&(ps+i)->na);
		printf("ENTER THE AUTHOR : ");
		scanf("%s",&(ps+i)->au);
		printf("ENTER THE PRICE : ");
		scanf("%d",&(ps+i)->pr);
		printf("ENTER THE PUBLISHER : ");
		scanf("%s",&(ps+i)->pu);

	 }
	printf("\tNO\tNAME\tAUTHOR\tPRICE\tPUBLISHER\n");
	for(i=0;i<*pn;i++)
	{
		printf("\n\t%d",(ps+i)->no);
		printf("\t%s",(ps+i)->na);
		printf("\t%s",(ps+i)->au);
		printf("\t%d",(ps+i)->pr);
		printf("\t%s",(ps+i)->pu);
	}
	getch();
}