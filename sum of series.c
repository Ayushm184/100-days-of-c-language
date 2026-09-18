#include <stdio.h>
 
int main() 
{
    int n;
    float sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
 
    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i - 1;
        float denominator = (i == 1) ? 1 : 2 * i;
        sum += numerator / denominator;
    }
 
    printf("Sum of series = %.4f\n", sum);
 
    return 0;
}