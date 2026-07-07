#include<stdio.h>
int occVowels(char str[]);
int main(){
    char str[] = "pranjal govind uphade";
    printf("The vowels in %s is : %d",str,occVowels(str));
    return 0;
}

int occVowels(char str[]){
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]== 'a' || str[i]== 'e' || str[i] == 'i' || str[i]=='o' || str[i] == 'u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            count++;
        }
    }

    return count;
}