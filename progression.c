#include<stdio.h>
void main()
{
    int b[100],i,n,a,d,s=0;
    scanf("%d %d %d",&n,&a,&d);
    for(i=0;i<n;i++)
    {
        b[i]=a+i*d;
    }
    for(i=0;i<n;i++)
    {
        s=s+b[i];
    }
    printf("%d",s);
}
