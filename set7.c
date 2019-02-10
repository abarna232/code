#include<stdio.h>
void main()
{
    int a,i,b=1;
    scanf("%d",&a);
    if(a%2==0)
    {
        for(i=0;;i++)
        {
            b=b*2;
            if(b>=a)
            {
                printf("%d",b*2);
                break;
            }
        }
    }
    else
    {
        printf("invalid");
    }
}
