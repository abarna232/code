#include<stdio.h>
void main()
{
    int a,l=0,c=0,d=0,b,r;
    scanf("%d",&a);
    b=a;
    while(b)
    {
        b=b/10;
        l++;
    }
    while(a)
    {
        r=a%10;
        if(r==0 ||r==1)
        {
            c++;
        }
        else if(r<0 ||r>1)
        {
            d++;
        }
        a=a/10;
    }
    if((l==c)&&d==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
