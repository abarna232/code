#include<stdio.h>
void main()
{
    char a[100];
    int i,l=0,h,n,k;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    if(l%2==0)
    {
        n=l/2-1;
        k=n+1;
        for(i=0;a[i]!='\0';i++)
        {
            if(i==n||i==k)
            {
                printf("*");
            }
            else
            {
                printf("%c",a[i]);
            }
        }
    }
    else if(l%2!=0)
    {
        h=l/2;
        for(i=0;a[i]!='\0';i++)
        {
            if(i==h)
            {
                printf("*");
            }
            else
            {
                printf("%c",a[i]);
            }
        }
    }
}
