#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,l=0,c=0,j;
    scanf("%[^\n]",a);
for(i=0;a[i]!='\0';i++)
{
    l++;
}
j=0;
for(i=l-1;a[i]!='\0';i--)
{
    b[j]=a[i];
    j++;
}
for(i=0;a[i]!='\0';i++)
{
    if(a[i]==b[i])
    {
        c++;
    }
}
if(l==c)
{
    printf("yes");
}
else
{
    printf("no");
}
}
