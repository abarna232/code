#include<stdio.h>
void main()
{
    char s[100];
    int k,i;
    scanf("%[^\n]",s);
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        printf("%s\n",s);
    }
}
