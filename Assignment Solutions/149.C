#include<stdio.h>
#include<conio.h>
#include <math.h>
void main()
{
	int po(int,int);
	int p,b,c;
	clrscr();
	printf("ENTER THE BASE : ");
	scanf("%d",&b);
	printf("ENTER THE POWER : ");
	scanf("%d",&p);


	c=po(b,p);
	printf("\nANS : %d",c);

	getch();
}
int po(int i,int n)
{
	int b,c=1;

	for (b=1;b<=n;b++)

	{
	      c=c*i;

	}
	return c;


}