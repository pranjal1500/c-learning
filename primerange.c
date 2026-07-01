#include<stdio.h>

int main() {
    int n1, n2;
    printf("Enter range from:");
    scanf("%d",&n1);
    printf("Enter rangr to:");
    scanf("%d",&n2);
    int is_prime;
   
    for(int i=n1; i<=n2; i++){
        is_prime=1;
        if(i<=1){
            is_prime=0;
        }
        for(int j=2; j<i; j++){
            if(i%j==0){
                is_prime=0;
                break;
            }
        }
        if(is_prime==1){
            printf("%d\t",i);
        }
    }

    return 0;
}