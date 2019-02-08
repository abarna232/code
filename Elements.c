#include<stdio.h>
void main()
{
int a[100],n,k,i,l=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
l++;
}
}
if(l!=0)
{
printf("yes");
}
else 
{
printf("no");
}
}
