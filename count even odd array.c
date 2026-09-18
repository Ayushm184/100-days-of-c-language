#include <stdio.h>
 
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
 
    int arr[n], evenCount = 0, oddCount = 0;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
 
    printf("Even count = %d\n", evenCount);
    printf("Odd count = %d\n", oddCount);
 
    return 0;
}
 