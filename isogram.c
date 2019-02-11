#include<stdio.h>
void main()
{
    char a[100];
    int i,d=0,c=0,j;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                c=1;
            }
            else
            {
                d=1;
            }
        }
    }
    if(c!=1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
