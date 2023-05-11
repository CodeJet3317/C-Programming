#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[50];
	int s=0,m=1,i;
	clrscr();
	printf("WITH SPACE : ");
	gets(s1);

	for (i=0;s1[i]!='\0';i++)
	{
		if (s1[i]==' ')
		{
			s++;
			m++;
		}
	}
	printf("\nSPACE : %d",s);
	printf("\nWORDS : %d",m);


	getch();
}