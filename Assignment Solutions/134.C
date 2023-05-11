#include<stdio.h>
#include<conio.h>
void main()
{
	char a,s1[50];
	int i,t=0;
	clrscr();
	printf("ENTER WITHOUT SPACE : ");
	gets(s1);

	printf("%s\n",s1);

	printf("enter the character : ");
	scanf("%c",&a);

	for (i=0;s1[i]!='\0';i++)

	{
		if (s1[i]==a)
		{
			t++;
		}

	}
	printf("\nOCCURENCE : %d",t);


	getch();
}