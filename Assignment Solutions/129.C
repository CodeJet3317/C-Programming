#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[50],s2[50];
	int i;
	clrscr();
	printf("WITHOUT SPACE : ");
	scanf("%s",s1);

	for (i=0;s1[i]!='\0';i++)
	{

		s2[i]=s1[i];

	}
	s2[i]='\0';
	printf("\n%s",s2);


	getch();
}