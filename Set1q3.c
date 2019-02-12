#include<stdio.h>
void main()
{
char c;
int i;
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
printf("vowel");
}
else if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&& c>=97&&c<=122)
{
printf("consonant");
}
else 
{
printf("invalid");
}
}
