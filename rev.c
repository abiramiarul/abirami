#include<stdio.h>
#include<string.h>
int main(){
    char str[50],temp[50];
    char *rev;
    int j=0;
    printf("Enter any string : ");
    scanf("%s",str);
    rev = strrev(str);
    for(i=0;str[i]!='\0';++i)
    {
        if(str[i]!='a' || str[i]!='e' || str[i]!='i' || str[i]!='o' || str[i]!='u' || str[i]!='A' || str[i]!='E' || str[i]!='I' || str[i]!='O' || str[i]!='U')
            {
               temp[j]=str[i];
               j++;
             }
     }
    printf("Reverse string without vowels : %s",temp);
     return 0;
}
