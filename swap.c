#include <stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main() {
    int a, b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("After calling the function\na = %d b = %d\n",a,b);
    _swap(&a,&b);
    printf("After calling the function\na = %d b = %d\n",a,b);

    return 0;
}

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d b = %d\n",a,b);
}

void _swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("*a = %d *b = %d\n",*a,*b);
    
}