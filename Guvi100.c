#include<stdio.h>
void main()
{
int a,r,p=1; 
scanf("%d",&a);
while(a)
{
r=a%10;
p=p*r;
a=a/10;
}
printf("%d",p);
}
