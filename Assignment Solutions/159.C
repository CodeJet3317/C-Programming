
#include<stdio.h>
#include<conio.h>
struct std
{
	int r,st;
	char na[50];
	float pr;
};
void main()
{

	struct std s,s1;
	clrscr();
	printf("ENTER THE ROLL NO :");
	scanf("%d",&s.r);
	printf("ENTER THE NAME :");
	scanf("%s",&s.na);
	printf("ENTER THE STD :");
	scanf("%d",&s.st);
	printf("ENTER THE PER :");
	scanf("%f",&s.pr);

	printf("ENTER THE ROLL NO :");
	scanf("%d",&s1.r);
	printf("ENTER THE NAME :");
	scanf("%s",&s1.na);
	printf("ENTER THE STD :");
	scanf("%d",&s1.st);
	printf("ENTER THE PER :");
	scanf("%f",&s1.pr);



	printf("\tROLL NO");
	printf("\tNAME");
	printf("\tSTD");
	printf("\tPER");

	printf("\n\t%d",s.r);
	printf("\t%s",s.na);
	printf("\t%d",s.st);
	printf("\t%.2f",s.pr);

	printf("\n\t%d",s1.r);
	printf("\t%s",s1.na);
	printf("\t%d",s1.st);
	printf("\t%.2f",s1.pr);



	getch();
}