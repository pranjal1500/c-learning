#include<stdio.h>
void strSearch(char str[], char ch);
int main(){
    char str[100];
    char ch;
    printf("Enter the string : ");
    scanf("%s",str);
    printf("Enter character to search : ");
    scanf(" %c",&ch);
    strSearch(str, ch);

    return 0;
}
void strSearch(char str[], char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("Yes,this '%c' character is present in \"%s\" string",ch,str);
            return;
        }
    }

    printf("Character is not present ."); 
}