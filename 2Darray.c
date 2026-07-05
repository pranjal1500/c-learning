/*Create a 2D array, storing the tables of 2 & 3*/
#include<stdio.h>

int main(){
    int table[2][10];
    for(int i=0; i<2; i++){
        for(int j=0;j<10; j++){
            table[i][j]  = (i+2) * j;
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<10; j++){
            printf("%d\t",table[i][j]);
        }
        printf("\n");
    }
    return 0;
}