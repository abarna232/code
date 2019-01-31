#include<stdio.h>
void main()
{
    char a[100];
    int i,l=0;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=48 && a[i]<=57)
        {
            l++;
        }
    }
    printf("%d",l);
}
