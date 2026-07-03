/*create the function to print hot and cold depending on the temperature user enters*/
#include <stdio.h>

void Temp(int temp);
int main() {
    int temp;
    printf("enter temprature : ");
    scanf("%d",&temp);
    Temp(temp);
    return 0;
}

void Temp(int temp){
    if(temp<=30){
        printf("Cold");
    } else if(temp>30){
        printf("Hot");
    }
}

