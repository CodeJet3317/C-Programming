#include<stdio.h>
#include<conio.h>
struct em
{
	int no,sa,co,net;
	char na[50];
};


void main()
{
	struct em s,*ps;
	clrscr();
	ps=&s;
	printf("ENTER THE NO :");
	scanf("%d",&ps->no);
	printf("ENTER THE NAME :");
	scanf("%s",&ps->na);
	printf("ENTER THE SALARY :");
	scanf("%d",&ps->sa);
	printf("ENTER THE COMM :");
	scanf("%d",&ps->co);

	printf("\tNO\tNAME\tSALARY\tCOMM\tNET\n");
	printf("\t%d\t%s\t%d\t%d\t\%d",ps->no,ps->na,ps->sa,ps->co,(ps->sa+ps->co));


	getch();

}