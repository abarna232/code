#include<stdio.h>
void main()
{
    int a[100],i,n,t,j;
    scanf("%d",&n);
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
  printf("%d ",a[0]);
  printf("%d",a[n-1]);
}
