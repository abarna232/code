#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    while(1)
    {
    if(a%10==0)
    {
        printf("%d",a);
        break;
    }
    else
    {
        a++;
    }
}
}
