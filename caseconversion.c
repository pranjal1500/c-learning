/*Write a program to replace lowercase letters with uppercase and vice versa*/
#include<stdio.h>
#include<ctype.h>

int main(){
    char str[100];
    printf("Enter string : ");
    scanf("%s",str);
    for(int i=0; str[i]!='\0'; i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        } else if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }
    }

    puts(str);
    return 0;
}