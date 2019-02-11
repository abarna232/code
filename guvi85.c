#include<stdio.h>
void main()
{
    char a[100],b[100],c[100];
    int i,j,k;
    scanf("%[^\n]",a);
    j=0;
    k=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    b[i]='\0';
    c[k]='\0';
    for(i=0;b[i]!='\0';i++)
    {
        printf("%c",b[i]);
    }
    printf(" ");
    for(i=0;c[i]!='\0';i++)
    {
        printf("%c",c[i]);
    }
}
