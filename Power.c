#include<stdio.h>
void main()
{
int n,k,r=1;
scanf("%d %d",&n,&k);
while(k)
{
r=r*n;
k--;
}
printf("%d",r);
}
