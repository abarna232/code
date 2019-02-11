#include<stdio.h>
void main()
{
    int a,r,p=1,s=0,b[100],i,l=0;
    scanf("%d",&a);
    i=0;
    while(a)
    {
        r=a%10;
        if(r%2!=0)
        {
        b[i]=r;
        i++;
        }
        a=a/10;
    }
    b[i]='\0';
    for(i=0;b[i]!='\0';i++)
    {
        l++;
    }
    for(i=l-1;i>=0;i--)
    {
        printf("%d ",b[i]);
    }
}
