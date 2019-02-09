#include<stdio.h>
void main()
{
    char s[100];
    int k,i;
    scanf("%[^\n]",s);
    scanf("%d",&k);
    for(i=0;s[i]!='\0';i++)
    {
        if(i<k)
        printf("%c",s[i]);
    }
}
