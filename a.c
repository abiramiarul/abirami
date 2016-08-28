#include<stdio.h>
int main()
{
int a[15],i,c=0,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
    if(i!=j)
    {
        if(a[i]==a[j])
        {
        c++;
        }
    }
    }
    if(c==0)
    {
    printf("%d",a[i]);
    }
c=0;
}
return 0;
}
