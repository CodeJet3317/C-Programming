#include<stdio.h>
#include<conio.h>
struct em
{
	int no,sa,co,net;
	char na[50];
};


void main()
{
	struct em s;
	clrscr();
	printf("ENTER THE NO :");
	scanf("%d",&s.no);
	printf("ENTER THE NAME :");
	scanf("%s",&s.na);
	printf("ENTER THE SALARY :");
	scanf("%d",&s.sa);
	printf("ENTER THE COMM :");
	scanf("%d",&s.co);

	printf("\tNO\tNAME\tSALARY\tCOMM\tNET\n");
	printf("\t%d\t%s\t%d\t%d\t\%d",s.no,s.na,s.sa,s.co,(s.sa+s.co));


	getch();

}