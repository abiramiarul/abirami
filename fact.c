#include<stdio.h>
#include<conio.h>
int main()
{
int fact=1,n;
printf("enter the nu");
scanf("%d",&n);
for(int i=0;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
}
