#include<stdio.h>
#include<math.h>
void main()
{
int a,b;
float x;
printf("enter a, d=");
scanf("%d%d",&a,&b);
x=(a++)+b-(--a);
printf("%f",x);


}