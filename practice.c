#include <stdio.h>
struct date {
    int day;
    int month;
    int year;
};

int main() {
    struct date d;
    int due_date = 15;
    printf("Enter day, month and year of issusing the book:");
    scanf("%d%d%d",&d.day,&d.month,&d.year);
    d.day = d.day + due_date;
    printf("%d %d %d",d.day,d.month,d.year);
    return 0;
}