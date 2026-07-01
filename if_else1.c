/*Check PASS or FAIL*/
#include<stdio.h>

int main() {
    int marks;
    printf("Enter marks(0-100):");
    scanf("%d",&marks);
    // if(marks >= 0 && marks <30) {
    //     printf("FAIL\n");
    // } else if(marks >= 30 && marks <=100){
    //     printf("PASS\n");
    // } else {
    //     printf("Invalid marks\n");
    // }

    marks <= 30 ? printf("FAIL") : printf("PASS");
    

    return 0;
}