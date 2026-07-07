/*inserting an element at the end of an array*/
#include<stdio.h>

int main(){
    int arr[5] ={ 1, 2, 3 };
    int size = 3;
    arr[size] = 4;
    size++;
    printf("%d\n",arr[3]);
    return 0;
}