#include <stdio.h>
#include <math.h>
 
int main() {
    int num, original, digit, digits = 0;
    long long sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
 
    original = num;
 
    // Count number of digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
 
    while (num != 0) {
        digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
 
    if (sum == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }
 
    return 0;
}
 