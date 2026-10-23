#include<stdio.h>
#include<math.h>
void main()
{
int a, b, c;
printf("enter a, b, c =");
scanf("%d%d%d",&a,&b,&c);
((a>b)&(a>c))? printf("a is greatest number"):((b>c)?printf("b is greatest number"):printf("c is greatest number"));




}