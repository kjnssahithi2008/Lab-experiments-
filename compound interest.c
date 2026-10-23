#include<stdio.h>
#include<math.h>
void main()
{
int p,t,r;
float a,c;
printf("enter principle,time,rate of interst=");
scanf("%d%d%d",&p,&t,&r);
a=p*pow(1+(r/100),t);
c=a-p;
printf("compound interest=%f ",c);






}