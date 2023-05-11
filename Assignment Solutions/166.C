#include<stdio.h>
#include<conio.h>
struct emp
{
	int id,sa,ov,at;
	char na[50],des[60];
};
void main()
{

	int i,n;
	struct emp s[70];
	clrscr();
	printf("ENTER THE SIZE : ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("ENTER THE ID NO : ");
		scanf("%d",&s[i].id);
		printf("ENTER THE NAME : ");
		scanf("%s",&s[i].na);
		printf("ENTER THE DESIGNATION : ");
		scanf("%s",&s[i].des);
		printf("ENTER THE ATTENDANCE : ");
		scanf("%d",&s[i].at);
		printf("ENTER THE BASIC SALARY : ");
		scanf("%d",&s[i].sa);
		printf("ENTER THE OVERTIME_HRS : ");
		scanf("%d",&s[i].ov);

	}
	printf("\tID NO \tNAME\tDESIGNATION\tATTENDANCE\tSALARY\tOVERTIME\tTOTAL SALARY\n");

	for (i=0;i<n;i++)
	{
		printf("\n\t%d",s[i].id);
		printf("\t%s",s[i].na);
		printf("\t%s",s[i].des);
		printf("\t%d",s[i].at);

		if (s[i].at<25)
		{
			s[i].sa=s[i].sa-1000;
			printf("\t%d",s[i].sa);
		}
		else
		{
			printf("\t%d",s[i].sa);
		}
		printf("\t%d",s[i].ov);
		printf("\t%d",s[i].ov*50 + s[i].sa);
	}
	getch();
}
