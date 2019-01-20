#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscf();
scanf("%d",&x);
if(x>0)
{
if(x%2==0)
printf("Even");
else 
printf("Odd");
}
else 
{
printf("invalid");
}
getch();
}
