#include<stdio.h>

int main()
{
    float p,r,c;
    printf("ENTER X :");   
    scanf("%f",&p);
    printf("ENTER Y :");
    scanf("%f",&r);
    c=p*p + r*r;
    printf("ANS = %.2f",c);
    return 0;
}