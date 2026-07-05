#include<stdio.h>

int main(){
    float price[3];
    float GST;
    for(int i=0; i<3; i++){
        printf("Enter price of %d item : ",i+1);
        scanf("%f",&price[i]);
        GST = price[i] * 18/100;
        price[i] = price[i] + GST;
    }
    for(int i =0; i<3; i++){
        printf("final cost price[%d] : %f\n",i,price[i]);
    }

    return 0;
}