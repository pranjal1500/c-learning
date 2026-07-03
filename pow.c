/*Make your own Pow function*/
#include<stdio.h>
int powNum(int n,int expo);

int main(){
    int n,expo,pow;
    printf("Enter number to calculate the power : ");
    scanf("%d",&n);
    printf("Enter the power of number : ");
    scanf("%d",&expo);
    pow = powNum(n,expo);
    printf("The power of %d number is : %d",n,pow);
    return 0;
}

int powNum(int n,int expo){
    int power = 1;
    for(int i=1; i<=expo; i++){
        power = power * n;
    }

    return power;
}