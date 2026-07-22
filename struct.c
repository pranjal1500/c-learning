#include<stdio.h>
#include<string.h>

//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student ece[100];
    ece[0].roll = 1664;
    ece[0].cgpa = 10.00;
    strcpy(ece[0].name,"pranjal");
    printf("name = %s\n",ece[0].name);
    printf("roll no = %d\n",ece[0].roll);
    printf("cgpa = %.2f\n",ece[0].cgpa);
    return 0;
}