#include<stdio.h>
void main()
{
    int a,d,n,i=0;
    scanf("%d %d %d",&a,&d,&n);
    while(n)
    {
        i=i+a;
        a=a+d;
        n--;
    }
    printf("%d",i);
}
