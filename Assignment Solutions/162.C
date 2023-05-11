#include<stdio.h>
#include<conio.h>

struct book
{
	int no,pr;
	char na[50],au[50],pu[60];
};

void main()
{
	int i,n;
	struct book s[50];
	clrscr();

	printf("Enter Size:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("ENTER THE NO : ");
		scanf("%d",&s[i].no);
		printf("ENTER THE NAME : ");
		scanf("%s",&s[i].na);
		printf("ENTER THE AUTHOR : ");
		scanf("%s",&s[i].au);
		printf("ENTER THE PRICE : ");
		scanf("%d",&s[i].pr);
		printf("ENTER THE PUBLISHER : ");
		scanf("%s",&s[i].pu);

	 }
	printf("\tNO\tNAME\tAUTHOR\tPRICE\tPUBLISHER\n");
	for(i=0;i<n;i++)
	{
		printf("\n\t%d",s[i].no);
		printf("\t%s",s[i].na);
		printf("\t%s",s[i].au);
		printf("\t%d",s[i].pr);
		printf("\t%s",s[i].pu);
	}
	getch();
}