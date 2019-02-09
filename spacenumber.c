#include<stdio.h>
void main()
{
    int a,b,p=1,r,c=0,z;
    scanf("%d",&a);
    b=a;
    while(b)
    {
        b=b/10;
        c++;
    }
    z=c-1;
    while(z)
    {
        p=p*10;
        z--;
    }
    while(a)
    {
        r=a/p;
        printf("%d ",r);
        a=a%p;
        p=p/10;
        
    }
}
