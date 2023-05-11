#include<stdio.h>
#include<conio.h>

void main()
{
	int rn,m,q;
	char na[60];
	int i,n;
	FILE *fp;
	clrscr();

	fp=fopen("e:\\c\\emp.txt","a");

	printf("Enter the No of Records : ");
	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{
		printf("Enter the Item No : ");
		scanf("%d",&rn);
		printf("Enter the Item Name : ");
		scanf("%s",&na);
		printf("Enter the Price : ");
		scanf("%d",&m);
		printf("Enter the Quantity : ");
		scanf("%d",&q);
		fprintf(fp,"\n %d %s %d %d",rn,na,m,q);
	}
	fclose(fp);

	fp=fopen("e:\\c\\emp.txt","r");
	while( !feof(fp) )
	{
		fscanf(fp,"%d %s %d %d",&rn,&na,&m,&q);
		printf("\n\t %d",rn);
		printf("\t %s",na);
		printf("\t %d",m);
		printf("\t %d",q);
		printf("\t %d",m*q);
	}
	fclose(fp);
	getch();
}

