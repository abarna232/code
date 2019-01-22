#include<stdio.h>
void main()
{
int a,i,flag;
scanf("%d",&a);
flag=0;
for(i=2;i<a;i++)
{
if(a%i==0)
{
flag=1;
}
}
if(flag==1)
{
printf("no");
}
else 
{
printf("yes");
}
}
