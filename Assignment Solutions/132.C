#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[50],s2[50];
	int i,c=0,l=0,j;
	clrscr();

	j=0;
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
		s2[j]=s1[i];
		j++;
	}
	s2[j]='\0';

	printf("Reverse: %s",s2);

	for(i=0;s1[i]!='\0';i++)
	{
		if (s1[i]!=s2[i])
		{
			c=1;
		}

	}
	if (c==1)
		printf("\nnot pallindrone");
	else
		printf("\npallindrone");

	getch();
}