#include<stdio.h>
int binary_search(int arr[], int n, int key);
int main(){
    int arr[10], n, key, pos;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the search key : ");
    scanf("%d",&key);
    pos = binary_search(arr, n, key);
    if(pos == -1){
        printf("key not found");
    } else {
        printf("\n%d key is found at %d position",key, pos+1);
    }
    return 0;
}

int binary_search(int arr[], int n, int key){
    int low = 0, high = n-1, mid;
    
    while(low<=high){
        mid = (low + high)/2;
        if(key == arr[mid])
           return mid;
        if(key < arr[mid])
           high = mid - 1;
        else
           low = mid + 1;
    }

    return -1;
}