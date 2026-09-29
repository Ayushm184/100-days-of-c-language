//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
 
int main()
 {
    long long binary, reversed = 0;
    int digit, placeValue = 1;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
 
    // Flip each bit: 0 becomes 1, 1 becomes 0
    while (binary != 0) {
        digit = binary % 10;
        int flipped = (digit == 0) ? 1 : 0;
        reversed += flipped * placeValue;
        placeValue *= 10;
        binary /= 10;
    }
 
    printf("1's Complement = %lld\n", reversed);
 
    return 0;
}