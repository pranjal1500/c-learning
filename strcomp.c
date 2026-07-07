#include<stdio.h>
#include<string.h>

int main(){
    char firstStr[] = "Apple";
    char secStr[] = "Banana";
    printf("%d\n",strcmp(firstStr, secStr));
    printf("%d\n",strcmp(secStr, firstStr));
    return 0;
}