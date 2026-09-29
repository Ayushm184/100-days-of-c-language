//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
 
int main() {
    float a, b, result;
    char op;
    printf("Enter first number, operator, second number: ");
    scanf("%f %c %f", &a, &op, &b);
 
    switch (op) {
        case '+':
            result = a + b;
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result = %.2f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if ((int)b != 0) {
                printf("Result = %d\n", (int)a % (int)b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }
 
    return 0;
}
 