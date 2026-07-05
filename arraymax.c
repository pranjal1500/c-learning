/*find the largest number from an array*/
#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    printf("The largest number in an array is : %d",max);

    return 0;
}