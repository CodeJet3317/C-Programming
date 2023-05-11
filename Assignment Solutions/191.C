#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,i;
	FILE *fp;
	clrscr();

	fp=fopen("e:\\c\\int2.txt","w");

	printf("Enter the Numbers : ");
	for (i=1;i<=10;i++)
	{
		scanf("%d",&a);
		putw(a,fp);
	}
	fclose(fp);

	fp=fopen("e:\\c\\int2.txt","r");
	for (i=1;i<=10;i++)
	{
		b=getw(fp);
		printf("\n Int form the file : %d",b);
	}

	fclose(fp);

	getch();
}