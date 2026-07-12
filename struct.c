#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1,s2,s3;
    strcpy(s1.name,"abc");
    s1.roll=1;
    s1.cgpa = 8.90;
    strcpy(s2.name,"cde");
    s2.roll=34;
    s2.cgpa =9.90;
    strcpy(s3.name,"fgh");
    s3.roll=56;
    s3.cgpa = 9.55;
    printf("s1.n ame = %s\n",s1.name);
    printf("s1.roll = %d\n",s1.roll);
    printf("s1.cgpa = %.2f\n",s1.cgpa);
    printf("s2.name = %s\n",s2.name);
    printf("s2.roll = %d\n",s2.roll);
    printf("s2.cgpa = %.2f\n",s2.cgpa);
    printf("s3.name = %s\n",s3.name);
    printf("s3.roll = %d\n",s3.roll);
    printf("s3.cgpa = %.2f\n",s3.cgpa);
    return 0;
}