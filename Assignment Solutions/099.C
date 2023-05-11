#include<stdio.h>

#include<conio.h>

void main()
{
	int n,r,m=1,s=0;
	clrscr();
	printf("ENTER THE NO :");
	scanf("%d",&n);

	while (n!=0)
	{
		r=n%10;
		s=s+r;
		m=m*r;
		n=n/10;



	}
	printf("S : %d",s);
	printf("\nM : %d",m);
	if (s==m)
	{
		printf("\nPERFECT");
	}
	else
	{
		printf("\nNOT PERFECT");
	}


	getch();
}