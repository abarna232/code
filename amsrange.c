#include<stdio.h>
void main()
{
    int i,x,y,r,k,s;
    scanf("%d %d",&x,&y);
    for(i=x;i<y;i++)
    {
        k=i;
        s=0;
        while(k)
        {
            r=k%10;
            s=s+(r*r*r);
            k=k/10;
        }
        if(s==i)
        {
            printf("%d ",i);
        }
    }
}
