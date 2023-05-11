#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	printf("ENTER:");
	scanf("%c",&a);
	if (a>='a' && a<='z')
	{
		printf("SMALL");
	}
	else if (a>='A'&&a<='Z')
	{
		printf("CAPITAL");
	}
	else if (a>='0'&& a<='9')
	{
		printf("NUMBER");
	}
	else
	{
		printf("SPECIAL");
	}

	getch();
}