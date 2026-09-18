#include <stdio.h>
 
int main() {
    int n = 5;
 
    for (int i = 1; i <= n; i++) {
        // leading spaces
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        // numbers, decreasing start value each row
        for (int j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
 
    return 0;
}