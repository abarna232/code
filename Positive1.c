#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
scanf("%d",&x);
if(x>0)
printf("Positive");
else if(x<0)
printf("Negative");
else 
printf("zero");
getch();
}
