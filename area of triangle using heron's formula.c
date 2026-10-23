#include<stdio.h>
#include<math.h>
void main()
{
int s, a, b, c, d;
float e;
printf("enter the sides of triangle= ");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
e=s*(s-a)*(s-b)*(s-c);
d=sqrt(e);
printf("area of triangle=%f",d);
}