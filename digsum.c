#include<stdio.h>
void main()
{
    int a,b,r,p=0;
    scanf("%d",&a);
    b=a;
    while(b)
    {
        r=b%10;
        b=b/10;
        p=p+r;
    }
    printf("%d",p);
}
