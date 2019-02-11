#include<stdio.h>
void main()
{
    int a,b,c,i;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        c=a;
    }
    else
    {
        c=b;
    }
    for(i=c;i>0;i--)
    {
        if(a%i==0 && b%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}
