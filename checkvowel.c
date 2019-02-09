#include<stdio.h>
void main()
{
    char a[100];
    int i,d=0;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            printf("yes");
            break;
        }
        else
        {
            d=1;
        }
    }
    if(d==1)
    {
        printf("no");
    }
}
