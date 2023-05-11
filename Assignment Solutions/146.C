#include<stdio.h>
#include<conio.h>
void main()
{
	float di(float,float,float);
	float s1,s2,s3,i;
	clrscr();
	printf("ENTER THE S1 : ");
	scanf("%f",&s1);
	printf("ENTER THE S2 : ");
	scanf("%f",&s2);
	printf("ENTER THE S3 : ");
	scanf("%f",&s3);

	i=di(s1,s2,s3);

	printf("%.2f",i);

	getch();
}
float di(float a,float b,float c)
{
	float d;
	d=(a+b+c)/2;
	return d;
}