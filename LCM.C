#include <stdio.h>
 
int main() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
 
    // First find HCF, then use LCM = (a*b)/HCF
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int hcf = x;
    int lcm = (a * b) / hcf;
 
    printf("LCM of %d and %d = %d\n", a, b, lcm);
 
    return 0;
}