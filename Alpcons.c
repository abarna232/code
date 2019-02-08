#include<stdio.h>
void main()
{
char a[190];
int i,l=0,c=0;
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>=65 && a[i]<=90 ||(a[i]>=97&&a[i]<=122))
{
l++;
}
else if(a[i]>=48 &&a[i]<=57)
{
c++;
}
}
if(l!=0 && c!=0)
{
printf("yes");
}
else 
{
printf ("no");
}
}
