/*Print all letter in english alphabet using a pointers*/
#include<stdio.h>

int main(){
    char ch;
    char *p;
    p = &ch;
    for(*p = 'A'; *p <= 'Z' ; (*p)++){
        printf("%c\t",*p);
    }
    return 0;
}