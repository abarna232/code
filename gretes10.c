#include<stdio.h>
void main()
{
    int a[100],i,m,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
    }
    printf("%d",m);
}
