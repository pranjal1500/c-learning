/*Write a program to print the highest frequency chracter in a string*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count[100];
    printf("Enter string : ");
    scanf("%s",str);
    for(int i=0; str[i]!='\0'; i++){
        count[i]=0;
        for(int j=0; str[j]!='\0'; j++){
            if(str[i]==str[j]){
                count[i]++;
                
            }
        }
    }  
    
    for(int i=0; i<strlen(str); i++){
        printf("%d",count[i]);
    }
    int max = count[0];
    char ch = str[0]; 
    for(int i=1; i<strlen(str); i++){
        if(count[i]>max){
            max = count[i];
            ch = str[i];
        }
    }

    printf("%d times occur %c\n",max,ch);
    return 0;
}