/*Write a program to convert all lowercase vowels to uppercase in a string*/
#include<stdio.h>
void caseConvert(char str[]);
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s",str);
    caseConvert(str);
    puts(str);
    return 0;
}

void caseConvert(char str[]){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||str[i] == 'o' || str[i] == 'u'){
            str[i] = str[i] - 32;
        }
    }
}