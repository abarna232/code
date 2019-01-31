#include<stdio.h>
void main()
{
    char a[100];
    int i,l=0,d=0,k;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
    d++;
    }
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>=48 && a[i]<=57)||(a[i]>=65 &&a[i]<=90)||(a[i]>=97&&a[i]<=122))
        {
            l++;
        }
    }
    k=d-l;
    printf("%d",k);
}
