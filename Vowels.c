#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i;
for(i=0;a[i]!='\0';i++)
{
if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
{
printf("Vowel");
break;
}
else 
{
printf("Consonant");
break;
}
else 
{
printf("invalid");
break;
}
}
}
