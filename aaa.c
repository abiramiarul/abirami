

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int no;
	int rev[10];
	int revno=0;
	int temp=0;
	int len=0;
	int c=0;
	printf("\nEnter a number");
	scanf("%d",&no);
	temp=no;
	//printf("\nlen=%d",temp);
	while(temp>0)
	{
		c=temp%10;
		//printf("\nc=%d",c);
		temp=temp/10;
		//printf("\ntemp=%d",temp);
		rev[len]=c;
		//printf("\nrev[len]=%d",rev[len]);
		len++;
		//printf("\nlen=%d",len);
	}
	for(int i=0;i<len;i++)
	{
	revno+=rev[i]*pow(10,len-(i+1));
	//printf("\nrevno=%d",revno);
	}
	if(no==revno)
	{
	printf("\npaindrome");
	}	
	else
	{
		printf("\nnot a palindrome");
	}
return 0;
}

  

