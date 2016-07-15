include<stdio.h>
#include<conio.h>
void main()
{
 int i,reverse=0;
 printf("Enter a number to reverse \n");
 scanf("%d",&i);
 while (i!= 0)
 {
  reverse=reverse*10;
  reverse=reverse + i % 10;
  i=i/10;
 }
 printf("Reverse of entered number is = %d\n", reverse);
 getch();
}
