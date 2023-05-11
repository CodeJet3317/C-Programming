#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[50];
	int i,j,l=0;
	clrscr();
	printf("WITHOUT SPACE : ");
	scanf("%s",s1);

	printf("%s",s1);

	for (i=0;s1[i]!='\0';i++)
	{
		l++;
	}

	printf("\nLENGTH : %d",l);

	for (i=0;i<=l;i++)
	{
		printf("\n");
		for (j=0;j<i;j++)
		{
			printf("%c",s1[j]);
		}

	}

	getch();
}