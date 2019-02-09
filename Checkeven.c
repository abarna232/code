#include<stdio.h>
void main()
{
int a,b,k,i,c=0,d=0;
scanf("%d %d %d",&k,&a,&b);
for(i=a+1;i<b;i++)
{
c++;
}
for(i=a+1;i<b;i++)
{
if(i==k)
{
printf("yes");
}
else 
{
d++;
}
}
if(c==d)
{
printf("no");
}
}
