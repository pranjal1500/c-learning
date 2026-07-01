/*Check given number is natural or not*/
#include<stdio.h>

int main() {
    float num;
    printf("Enter number : ");
    scanf("%f",&num);
    if(num > 0 && num == (int)num)  {
            printf("%d is a natural number\n",(int)num);
        
    } else {
        printf("The %f is not a natural number",num);
    }

return 0;
}