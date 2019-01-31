#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,l=0,d=0;
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        d++;
    }
    for(i=0;a[i]!='\0';i++)
    {
        if((l==d)||(l>d))
        {
            printf("%c",a[i]);
        }
    }
    for(i=0;b[i]!='\0';i++)
    {
        if(d>l)
        {
            printf("%c",b[i]);
        }
    }
}
