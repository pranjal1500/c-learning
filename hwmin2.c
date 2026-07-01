/*find smallest of two numbers*/
//1 -> first number is smaller than second 
//0 -> first number is greater than second
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("%d\n", a<b);
    return 0;
}