#include <stdio.h>
 
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
 
    int arr[n], posCount = 0, negCount = 0, zeroCount = 0;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            posCount++;
        } else if (arr[i] < 0) {
            negCount++;
        } else {
            zeroCount++;
        }
    }
 
    printf("Positive count = %d\n", posCount);
    printf("Negative count = %d\n", negCount);
    printf("Zero count = %d\n", zeroCount);
 
    return 0;
}