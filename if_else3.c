/*check a character entered by user is uppercase or not*/
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("upper case\n");
    }
    else if (ch >= 'a' && ch <= 'z')  {
        printf("lower case\n");
    } 
    else {
        printf("Not a english letter\n");
    }
    return 0;
}