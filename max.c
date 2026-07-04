/*find maximum number using pointers*/
#include<stdio.h>

int main(){
    int a,b;
    int *p1, *p2;
    printf("Enter two numbers : ");
    scanf("%d %d",&a, &b);
    p1 = &a;
    p2 = &b;
    if(*p1>*p2){
        printf("%d is the maximum number",*p1);
    } else {
        printf("%d is the maximum number",*p2);
    }

    return 0;
}