#include<stdio.h>
void main()
{
    int a[100],i,j,n,k,t;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
              t=a[i];
              a[i]=a[j];
              a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==k-1)
        {
            printf("%d",a[i]);
        }
    }
}
