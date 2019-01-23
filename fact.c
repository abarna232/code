#include <stdio.h>
void main()
{
    int a,i,s=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=s*i;
    }
    printf("%d",s);
}
