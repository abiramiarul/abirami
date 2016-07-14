#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
scanf("%d",&year);
if(year%4==0)
printf("Leap year");
else 
printf("not a leap year");
getch();
}
