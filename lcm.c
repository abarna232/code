#include<stdio.h>
void main()
{
    int a,b,n;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        n=a;
    }
    else
    {
        n=b;
    }
    while(n)
    {
        if(n%a==0 && n%b==0)
        {
            printf("%d",n);
            break;
        }
        ++n;
    }
}
