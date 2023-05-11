#include<stdio.h>
#include<conio.h>

void main()
{
	char a,b;
	FILE *fp;
	clrscr();

	fp=fopen("e:\\c\\char2.txt","w");

	printf("Enter the Name : ");
	do
	{
		scanf("%c",&a);
		putc(a,fp);
	}
	while(a!='\n');
	fclose(fp);

	fp=fopen("e:\\c\\char2.txt","r");
	do
	{
		b=getc(fp);
		printf("%c",b);
	}
	while(b!=EOF);
	fclose(fp);

	getch();
}