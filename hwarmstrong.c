/*To Check a given number is armstrong or not*/
#include<stdio.h>

int main() {
    int num, sum = 0, rem, original;
    printf("Enter number : ");
    scanf("%d",&num);
    original = num;
    while(num>0) {
        rem = num % 10;
        sum += rem * rem * rem; //sum = sum + rem * rem * rem;
        num = num / 10;
    }
    printf("Sum = %d\n",sum);
    if( original == sum){
        printf("The %d is a Armstrong number \n",original);
    } else {
        printf("The %d is not a Armstrong number \n",original);
    }
    return 0;
}