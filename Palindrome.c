#include<stdio.h>
void main()
{
int a,r,s,b;
scanf("%d",&a);
r=1;
s=0;
b=a;
while(b)
{
b=b/10;
r=b%10;
s=s*10+r;
}
printf("%d",s);
}

