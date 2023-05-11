#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	FILE *fp;
	clrscr();

	fp=fopen("e:\\c\\int1.txt","w");

	printf("Enter the int : ");
	scanf("%d",&a);

	putw(a,fp);

	fclose(fp);

	fp=fopen("e:\\c\\int1.txt","r");
	b=getw(fp);
	printf("\n Int form the file : %d",b);

	fclose(fp);

	getch();
}