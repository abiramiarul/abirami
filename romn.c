#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int i,value=0;
	char *a;
	a=malloc(1000000);
	printf("Enter Roman Letters:");
	scanf("%s",a);
	for(i=0;i<strlen(a);i++){
		if(*(a+i)=='I'){
			if(*(a+(i+1))=='V'){
				value=value+4;
				i++;
			}else if(*(a+(i+1))=='X'){
				value=value+9;
				i++;
			}else{
				value=value+1;
			}
		}else
		if(*(a+i)=='V'){
			value=value+5;
		}else 
		if(*(a+i)=='X'){
			if(*(a+(i+1))=='C'){
				value=value+90;
				i++;
			}else if(*(a+(i+1))=='L'){
				value=value+40;
				i++;
			}else{
				value=value+10;
			}
		}else 
		if(*(a+i)=='C'){
			if(*(a+(i+1))=='M'){
				value=value+900;
				i++;
			}else{
				value=value+100;
			}
		}else
		if(*(a+i)=='M'){
		value=value+1000;
		}else
		if(*(a+i)=='L'){
			value=value+50;
		}
	}
	printf("%d",value);
}
