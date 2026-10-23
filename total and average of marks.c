#include<stdio.h>
#include<math.h>
void main()
{
int t, h, p, c, m, sum;
float ave;
printf("enter telugu, hindi,physics,chemistry, maths");
scanf("%d%d%d%d%d",&t,&h,&p,&c,&m);
sum=t+h+p+c+m;
printf("sum of sujects=%d",sum);
ave=sum/5;
printf("\naverage of sujects=%f",ave);


}