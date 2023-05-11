#include<stdio.h>
#include<conio.h>
void main()
{
	char b='*';
	char a,s1[50];
	int i,l;
	clrscr();
	printf("WITHOUT SPACE : ");
	gets(s1);

	printf("%s\n",s1);

	printf("enter the char : ");
	scanf("%c",&a);

	for (i=0;s1[i]!='\0';i++)
	{
		if (s1[i]==a)
		{
		       s1[i]=b;


		}

	}

	printf("%s",s1);

	getch();
}