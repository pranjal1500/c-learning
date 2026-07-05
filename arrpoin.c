#include<stdio.h>

int main(){
    int aadhar[5];
    int * ptr = &aadhar[0];

    for(int i=0; i<5; i++){
        printf("Enter %d aadhar : ",i);
        scanf("%d",(ptr+i));   
    }

    for(int i=0; i<5; i++){
        printf("%d aadhar is : %d\n",i,*(ptr+i));
    }
    return 0;
}