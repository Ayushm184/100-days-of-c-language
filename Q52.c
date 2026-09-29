#include <stdio.h>

int main() {
    int groups = 5;

    for (int i = 1; i <= groups; i++) {
        
        int count = (i <= 3) ? 2 * i - 1 : 2 * (groups + 1 - i) - 1;

        for (int j = 0; j < count; j++)
            printf("*\n");          

        if (i < groups)
            printf("\n");           
    }

    return 0;
}