/*print the array in reverse order using array*/
#include <stdio.h>

int main(){
    int arr[4] = {1, 2, 3, 4};
    int * ptr = arr;//&arr[0] == arr
    for(int i = 3; i>=0; i--){
        printf("%d\t",*(ptr+i));
    }
    return 0;
}