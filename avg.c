#include<stdio.h>
void main()
{
    int a[100],n,i,s=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    r=s/n;
    printf("%d",r);
}
