#include<stdio.h>
void main()
{
    int a,b,c,d=0,i;
    scanf("%d %d",&a,&b);
    c=a*b;
    for(i=0;i<=c;i++)
    {
        if(c==i*i)
        {
        printf("yes");
        break;
        }
    else 
    {
      d++;
    }
    }
    if(d==c+1)
    {
        printf("no");
    }
}
