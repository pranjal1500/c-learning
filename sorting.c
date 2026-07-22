/*arrange the elements in ascending order*/
#include<stdio.h>
void swap(int * arr, int * a){
    int temp = *arr;
    *arr = *a;
    *a = temp;
}
int main(){
    int arr[100], n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of array : ");
    for(int i=0; i<n ;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
    printf("The sorted array is :\n");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}