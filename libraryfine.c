#include <stdio.h>
 
int main()
 {
    int lateDays;
    float fine = 0;
    printf("Enter number of late days: ");
    scanf("%d", &lateDays);
 
    if (lateDays > 30) {
        printf("Membership Cancelled\n");
    }
     else if (lateDays > 10) {
        fine = 5 * 2 + 5 * 4 + (lateDays - 10) * 6;
        printf("Fine = Rs.%.2f\n", fine);
    } 
    else if (lateDays > 5) {
        fine = 5 * 2 + (lateDays - 5) * 4;
        printf("Fine = Rs.%.2f\n", fine);
    } 
    else if (lateDays > 0) {
        fine = lateDays * 2;
        printf("Fine = Rs.%.2f\n", fine);
    } 
    else {
        printf("No Fine\n");
    }
 
    return 0;
}
 