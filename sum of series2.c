#include <stdio.h>
 
int main() {
    int n;
    float sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
 
    // Numerator: 2, 4, 6, 8, ...  -> 2*i
    // Denominator: 3, 7, 11, 15, ... -> 4*i - 1
    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i;
        float denominator = 4 * i - 1;
        sum += numerator / denominator;
    }
 
    printf("Sum of series = %.4f\n", sum);
 
    return 0;
}