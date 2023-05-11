#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[50],s2[50];
	int i,j,l=0;
	clrscr();

	printf("ENTER WITHOUT SPACE : ");
	scanf("%s",s1);
	printf("%s",s1);

	for (i=0;s1[i]!='\0';i++)
	{
		l++;


	}
	printf("\n%d\n",l);

	for(i=l-1;i>=0;i--)
	{
		s2[i]=s1[i];
		printf("%c",s2[i]);
	}

	getch();
}