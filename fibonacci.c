#include<stdio.h>
void main()
{
    int a,b=0,c=1,i,n;
    scanf("%d",&a);
    printf("%d ",c);
    for(i=1;i<a;i++)
    {
        n=b+c;
        printf("%d ",n);
        b=c;
        c=n;
    }
    
}
