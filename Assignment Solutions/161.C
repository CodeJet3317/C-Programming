#include<stdio.h>
#include<conio.h>

struct item
{
	int no,pr,qty,to;
	char na[50];
};

void main()
{
	int i,n;
	struct item s[50];
	clrscr();

	printf("Enter Size:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("ENTER THE NO : ");
		scanf("%d",&s[i].no);
		printf("ENTER THE NAME : ");
		scanf("%s",&s[i].na);
		printf("ENTER THE PRICE : ");
		scanf("%d",&s[i].pr);
		printf("ENTER THE QTY : ");
		scanf("%d",&s[i].qty);
	 }
	printf("\tNO\tNAME\tPRICE\tQTY\tTOTAL\n");
	for(i=0;i<n;i++)
	{
		printf("\n\t%d",s[i].no);
		printf("\t%s",s[i].na);
		printf("\t%d",s[i].pr);
		printf("\t%d",s[i].qty);
		printf("\t%d",(s[i].pr *s[i].qty));
	}
	getch();
}