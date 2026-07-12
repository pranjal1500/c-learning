/*Write a program to remove spaces in a string*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char ch = ' ';
    printf("Enter string : ");
    fgets(str,100,stdin);
    int len = strlen(str);
    for(int i=0; str[i]!='\0';i++){
        if(str[i] == ch){
            for(int j=0; str[j]!='\0'; j++){
                str[i+j] = str[i+j+1];
            }
        }
    }

    puts(str);

    return 0;
}