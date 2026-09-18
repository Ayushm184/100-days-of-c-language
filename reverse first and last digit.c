#include <stdio.h>
#include <math.h>
 
int main()
 {
    int num, digits, firstDigit, lastDigit, result;
    printf("Enter a number: ");
    scanf("%d", &num);
 
    int temp = num;
    digits = 0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
 
    lastDigit = num % 10;
    firstDigit = num / (int)pow(10, digits - 1);
 
    
    result = num - firstDigit * (int)pow(10, digits - 1) - lastDigit;
    result = result + lastDigit * (int)pow(10, digits - 1) + firstDigit;
 
    printf("Original number = %d\n", num);
    printf("After swapping first and last digit = %d\n", result);
 
    return 0;
}