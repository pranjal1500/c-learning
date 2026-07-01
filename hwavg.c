/*To print average of three numbers*/
#include <stdio.h>

int main() {
    int n1, n2, n3;
    float avg;
    printf("Enter three integers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    avg = (n1+n2+n3)/3.0;
    printf("\nThe Average of three numbers is %.2f",avg);

    return 0;
}