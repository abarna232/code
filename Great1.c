#include <stdio.h>
void main()
{
int n,a[10],m=a[0],i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
if(a[i]>m)
{
m=a[i];
}
}
printf("%d",m);
}
