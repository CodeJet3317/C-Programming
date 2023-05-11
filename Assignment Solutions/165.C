#include<stdio.h>
#include<conio.h>
struct ath
{
	int he,we;
	char na[50];
};


void main()
{
	int i,n;
	struct ath s[60];
	clrscr();
	printf("ENTER THE SIZE : ");
	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		printf("ENTER THE NAME : ");
		scanf("%s",s[i].na);

		printf("ENTER THE HEIGHT : ");
		scanf("%d",&s[i].he);
		printf("ENTER THE WEIGHT : ");
		scanf("%d",&s[i].we);
	}
	printf("\tNAME\tHEIGHT\tWEIGHT\t\n");
	for (i=0;i<n;i++)

	{
		if (s[i].he>=120 && s[i].we>=50)
	       {	printf("\n\t%s",s[i].na);
			printf("\t%d",s[i].he);
			printf("\t%d",s[i].we);
	       }
	}
getch();
}