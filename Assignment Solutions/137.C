#include<stdio.h>
#include<conio.h>
void main()
{

	char t,s1[50];
	int i,j,l=0;
	clrscr();
	printf("WITHOUT SPACE : ");
	gets(s1);

	printf("%s\n",s1);

	for (i=0;s1[i]!='\0';i++)
	{
		l++;
	}

	for(i=0;s1[i]!='\0';i++)
	{
		for(j=0;s1[j]!='\0';j++)
		{
			if(s1[i] < s1[j])
			{
				t=s1[i];
				s1[i]=s1[j];
				s1[j]=t;
			}
		}

	}
	printf("%s",s1);



	getch();
}