#include <stdio.h>

int main(void) {
	int array[100];
	int i,noOfElements,max=0,min=0,minPos,maxPos;
	scanf("%d",&noOfElements);
	for(i=0;i<noOfElements;i++)
	 {
	 scanf("%d",&array[i]);
	 if(i==0)
	 {
	 	max=array[i];
	 	min=array[i];
	 }
      if(max<array[i])
      {
      	max=array[i];
      	maxPos=i;
      }
      if(min>array[i])
      {
      	min=array[i];
      	minPos=i;
      }
	 }
	 printf("%d %d",max,min);
	 printf("\n%d %d",maxPos+1,minPos+1);
	
	
	
	return 0;
}
