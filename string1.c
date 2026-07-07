#include<stdio.h>

int main(){
    // char str[100];
    // fgets(str,100, stdin);
    // puts(str);
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    char cannotChange[] = "Hello World";
    puts(cannotChange);

    return 0;
}