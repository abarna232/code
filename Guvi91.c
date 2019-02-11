#include<stdio.h>
void main()
{
int l,b,h,s,v;
scanf("%d %d %d",&l,&b,&h);
s=2*((l*b)+(b*h)+(h*l));
v=l*b*h;
printf("%d %d",s,v);
}
