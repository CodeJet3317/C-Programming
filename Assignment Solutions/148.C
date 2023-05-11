#include<stdio.h>
#include<conio.h>
void main()
{
	int fac(int);
	int n,c;
	clrscr();
	printf("ENTER THE NO : ");
	scanf("%d",&n);


	c=fac(n);
	printf("\nFACTORIAL : %d",c);

	getch();
}
int fac(int n)
{
	int i,c=1;
	for (i=n;i>=1;i--)

	{
		c*=i;
	}

	return c;


}