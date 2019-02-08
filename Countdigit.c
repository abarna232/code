#include<stdio.h>
void main()
{
int n,l=0;
scanf("%d",&n);
while(n)
{
n=n/10;
l++;
}
printf("%d",l);
}
