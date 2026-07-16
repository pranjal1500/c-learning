#include<stdio.h>

int Linear_Search(int arr[], int n, int key);
int main(){
    int arr[100], n, pos;
    int key;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of array : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key to search : ");
    scanf("%d",&key);
    pos = Linear_Search(arr, n, key);
    if(pos==-1){
        printf("key not found");
    } else{
        printf("%d key found at %d position",key,pos+1);
    }
    return 0;
}

int Linear_Search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }

    return -1;
}