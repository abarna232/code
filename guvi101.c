#include<stdio.h>
void main()
{
    char a[100];
    int d,i,c=0;
    scanf("%[^\n]",a);
    scanf("%d",&d);
    for (i=0;a[i]!='\0';i++)
    {
        c++;
    }
    for(i=c-d;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
}
