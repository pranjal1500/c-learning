/*Perimeter of rectangle*/
#include <stdio.h>

int main() {
    int a, b; //lenght=a, breadth=b
    float perimeter;
    printf("Enter lenght of rectangle:");
    scanf("%d",&a);
    printf("Enter the breadth of rectangle:");
    scanf("%d",&b);
    perimeter = 2 * (a + b);
    printf("Perimeter = %.2f",perimeter);
    return 0;
}