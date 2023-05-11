#include<stdio.h>
#include<conio.h>

struct std
{
	int rn,st,pr;
	char na[60];
};
void main()
{
	struct std s;
	struct std *ps;

	clrscr();
	ps=&s;

		printf("ENTER THE R NO : ");
		scanf("%d",&ps->rn);
		printf("ENTER THE NAME : ");
		scanf("%s",&ps->na);
		printf("ENTER THE STD : ");
		scanf("%d",&ps->st);
		printf("ENTER THE PER : ");
		scanf("%d",&ps->pr);


	printf("\n\tR NO\tNAME\tSTD\tPER\n");


		printf("\n\t%d",ps->rn);
		printf("\t%s",ps->na);
		printf("\t%d",ps->st);
		printf("\t%d",ps->pr);

	getch();

}