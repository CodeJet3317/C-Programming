#include<stdio.h>
#include<conio.h>

void main()
{
	int rn,m;
	char na[60];
	int i,n;
	FILE *fp;
	clrscr();

	fp=fopen("e:\\c\\stud.txt","a");

	printf("Enter the No of Records : ");
	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{
		printf("Enter the Roll No : ");
		scanf("%d",&rn);
		printf("Enter the Name : ");
		scanf("%s",&na);
		printf("Enter the Marks : ");
		scanf("%d",&m);
		fprintf(fp,"\n %d %s %d",rn,na,m);
	}
	fclose(fp);

	fp=fopen("e:\\c\\stud.txt","r");
	while( !feof(fp) )
	{
		fscanf(fp,"%d %s %d",&rn,&na,&m);
		printf("\n\t %d",rn);
		printf("\t %s",na);
		printf("\t %d",m);
	}
	fclose(fp);
	getch();
}

