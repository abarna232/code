#include<stdio.h>
void main()
{
int a,i,l=0;
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
l++;
break;
}
}
if(l!=0)
{
printf("no");
}
else 
{
printf("yes");
}
}
