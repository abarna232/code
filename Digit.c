#include<stdio.h>
void main()
{
int a,l=0;
scanf("%d",&a);
while(a)
{
a=a/10;
l++;
}
printf("%d",l);
}
