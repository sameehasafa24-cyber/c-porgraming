#include<stdio.h>
void main()
{
    float p, r, t, intrest;
    printf("enter amount =");
    scanf("%f",&p);
    printf("enter intrest =");
    scanf("%f",&r);
    printf("enter years =");
    scanf("%f",&t);
    intrest=p*r*t/100;
    printf("intrest=%f",intrest);
}
