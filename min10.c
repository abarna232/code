#include<stdio.h>
void main()
{
    int a[100],i,n=10,m,t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<m)
        {
         t=m;
         m=a[i];
         a[i]=t;
        }
    }
    printf("%d",m);
}
