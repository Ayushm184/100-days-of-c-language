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