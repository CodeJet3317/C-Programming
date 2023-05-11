#include<stdio.h>
#include<conio.h>

void main()
{
	char a,b;
	FILE *fp;
	clrscr();

	fp=fopen("e:\\c\\char1.txt","w");     //"e:\\c\\char1.txt" This location where the txt file is to be saved.

	printf("Enter the char : ");
	scanf("%c",&a);

	putc(a,fp);

	fclose(fp);

	fp=fopen("e:\\c\\char1.txt","r");
	b=getc(fp);
	printf("\n Char form the file : %c",b);

	fclose(fp);

	getch();
}