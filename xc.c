#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[5][100];
char b[1][5];
int i,count=0,c;
printf("\n enter the character ");
for(i=0;i<5;i++)
{
scanf("%s",&a[i]);
}
printf("\n enter the character to be searched");
for(i=0;i<1;i++)
{
scanf("%s",&b[i]);
}
for(i=0;i<5;i++)
{c=strcmp(a[i],b[0]);
if(c==0)
count++;
}
printf("\n the number of times th character is shown is %d",count);
getch();
}
