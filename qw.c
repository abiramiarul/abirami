#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("enter the no");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf(" %d\n%d",a,b);
}
