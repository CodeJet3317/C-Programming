
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

	int i,n;
	struct std s[50];
	void sum(struct std);
	clrscr();
	printf("ENTER THE SIZE : ");
	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		printf("ENTER THE ROLL NO :");
		scanf("%d",&s[i].r);
		printf("ENTER THE NAME :");
		scanf("%s",&s[i].na);
		printf("ENTER THE STD :");
		scanf("%d",&s[i].st);

		printf("ENTER THE MARKS 1 :");
		scanf("%d",&s[i].m1);
		printf("ENTER THE MARKS 2 :");
		scanf("%d",&s[i].m2);
		printf("ENTER THE MARKS 3 :");
		scanf("%d",&s[i].m3);

	}


	printf("\tROLL NO");
	printf("\tNAME");
	printf("\tSTD");
	printf("\tMARKS 1");
	printf("\tMARKS 2");
	printf("\tMARKS 3");
	printf("\tTOTAL");


	for (i=0;i<n;i++)
	{
		s[i].to=s[i].m1+s[i].m2+s[i].m3;
		printf("\n\t%d",s[i].r);
		printf("\t%s",s[i].na);
		printf("\t%d",s[i].st);
		printf("\t%d",s[i].m1);
		printf("\t%d",s[i].m2);
		printf("\t%d",s[i].m3);
		sum(s[i]);

	}
	getch();
}

void sum(struct std x)
{
	x.to=x.m1+x.m2+x.m3;
	printf("\t%d",x.to);
}