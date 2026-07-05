/*find a occurance of a number in array*/
#include<stdio.h>
int main(){
    int n, search,count=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the number to search : ");
    scanf("%d",&search);

    for(int i=0; i<n; i++){
        if(search==arr[i]){
            count++;
        }
    }

    printf("The occurance of %d is : %d",search,count);

    return 0;
}