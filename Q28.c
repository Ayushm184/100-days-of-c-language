//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
 
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
        }
        num /= 10;
    }
 
    printf("Product of odd digits = %lld\n", product);
 
    return 0;
}
 