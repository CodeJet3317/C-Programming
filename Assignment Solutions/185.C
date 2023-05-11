#include<stdio.h>
#include<conio.h>

struct item
{
	int no,pr,qty,to;
	char na[50];
};

void main()
{
	int i,n,*pn;
	struct item s[50],*ps;
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
		printf("ENTER THE PRICE : ");
		scanf("%d",&(ps+i)->pr);
		printf("ENTER THE QTY : ");
		scanf("%d",&(ps+i)->qty);
	 }
	printf("\tNO\tNAME\tPRICE\tQTY\tTOTAL\n");
	for(i=0;i<*pn;i++)
	{
		printf("\n\t%d",(ps+i)->no);
		printf("\t%s",(ps+i)->na);
		printf("\t%d",(ps+i)->pr);
		printf("\t%d",(ps+i)->qty);
		printf("\t%d",((ps+i)->pr *(ps+i)->qty));
	}
	getch();
}