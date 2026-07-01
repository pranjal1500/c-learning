/*Check if given character is alphabet or digit*/
//1-> digit
//0-> not digit
#include <stdio.h>

int main() {
    char ch;
    printf("Enter the character:");
    scanf(" %c",&ch);
    printf("%d", ch >= '0' && ch <= '9');

    return 0;
}