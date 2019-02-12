#include<stdio.h>
void main()
{
int a,b,r,s=0;
scanf("%d",&a);
b=a;
while(b)
{
r=b%10;
s=s*10+r;
b=b/10;
}
if(a==s)
{
printf("yes");
}
else 
{
printf("no");
}
}
