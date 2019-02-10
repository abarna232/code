#include<stdio.h>
void main()
{
    int a,i,c=0,l=0;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        c++;
    }
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            printf("yes");
            break;
        }
        else
        {
            l++;
        }
    }
    if(c==l)
    {
        printf("no");
    }
}
