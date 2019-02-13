#include<stdio.h>
void main()
{
    int n,k,p=1;
    scanf("%d %d",&n,&k);
    while(k)
    {
      p=p*n;
      k--;
    }
    printf("%d",p);
}
