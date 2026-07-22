#include<stdio.h>

int main(){
    int size, n;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to insert : ");
    scanf("%d",&n);
    int loc;
    printf("Enter the location to enter : ");
    scanf("%d",&loc);
    return 0;
}