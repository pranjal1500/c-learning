#include<stdio.h>
#include<string.h>

void salting(char str[]);
int main(){
    char password[100];
    scanf("%s",password);
    salting(password);
    return 0;
}

void salting(char str[]){
    char salt[]="123";
    char newPass[100];
    strcpy(newPass,str);
    strcat(newPass,salt);
    puts(newPass);

}