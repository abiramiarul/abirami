#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter the no");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
   {
       printf("a is greatest",a);
   }
   else if(b>c)
{
    printf("b is greatest",b);


}
else{
    printf("c is greatest",c);
}
}
