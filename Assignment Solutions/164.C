#include<stdio.h>
#include<conio.h>
struct em
{
	int no,sa,co,da,pf,net;
	char na[50];
};


void main()
{
	int i,n;
	struct em s[60];
	clrscr();
	printf("ENTER THE SIZE : ");
	scanf("%d",&n);

	for (i=0;i<n;i++)

	{
		printf("ENTER THE NO :");
		scanf("%d",&s[i].no);
		printf("ENTER THE NAME :");
		scanf("%s",&s[i].na);
		printf("ENTER THE SALARY :");
		scanf("%d",&s[i].sa);
		printf("ENTER THE HA :");
		scanf("%d",&s[i].co);

		printf("ENTER THE DA :");
		scanf("%d",&s[i].da);
		printf("ENTER THE PF :");
		scanf("%d",&s[i].pf);

	}
	printf("\tNO\tNAME\tSALARY\tHA\tDA\tPF\tNET\n");


	for (i=0;i<n;i++)
	{
	printf("\n\t%d\t%s\t%d\t%d\t%d\t%d\t%d",s[i].no,s[i].na,s[i].sa,s[i].co,s[i].da,s[i].pf,(s[i].sa+s[i].co+s[i].da+s[i].pf));
	}

	getch();

}