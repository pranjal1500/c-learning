/*Write a function to find square root of a number*/
#include <stdio.h>
int sqrtNumber(int n);
int main() {
    int n;
    int sqrt;
    printf("Enter number to find square root : ");
    scanf("%d",&n);
    sqrt = sqrtNumber(n);
    if(sqrt == -1){
        printf("The square root of %d is not a integer",n);
    } else {
        printf("The square root of %d is %d",n, sqrt);
    }
    return 0;
}

int sqrtNumber(int n){
    int root;
    int found = 0;
    for(int i = 0; i*i<=n; i++){
        if(i*i==n){
            root = i;
            found = 1;
            break;
        }
    }

    if(found){
       return root;
    } else {
        return -1;
    }

}