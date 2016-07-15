#include<stdio.h>

void main()
{
 int n,i,a;
 int s;
	
 printf("\n enter a number");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  int c;
  
  if(n%i==0)
	{       int r=1;
		c=n/i;
		printf("c before entering while %d\n",c);
		while(c!=0)
		{
		
		//printf("%d\n",r);
		s=c%10;
		r=s*r;
		printf("r is now %d\n",r);
		c=c/10;
		printf("c is %d\n",c);
		
		
		}
		c=n/i;
		printf("c after entering while %d\n",c);
		a=r*c;
		printf("a is %d\n",a);
		
  
  if(a==n)
 		{
 		printf("the seed for %d is %d",n,c);
                break;
 		}
	}
  
 
 }
 
}
