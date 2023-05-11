#include<stdio.h>
#include<conio.h>
void main()
{
	int sum(int);
	int n,c;
	clrscr();
	printf("ENTER THE LIMIT : ");
	scanf("%d",&n);


	c=sum(n);
	printf("\nSUM : %d",c);

	getch();
}
int sum(int n)
{
	int i,c=0;
	for (i=1;i<=n;i++)

	{
		c+=i;
	}

	return c;


}