#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the value of a:\n");
scanf("%d",&a);
if(a%2)
{
printf("The number is even:");
}
if(a/2)
{
printf("The number is odd:");
}
getch();
}
