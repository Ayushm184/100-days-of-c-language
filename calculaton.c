# include<stdio.h>
int main()
{
    int a, b, sum, difference, product;
    float quotient;
    printf("enter a");
    scanf("%d" ,&a);

    printf("enter b");
    scanf("%d", &b);
    
    sum = a+b;
     printf("sum is : %d\n", sum);
     quotient = a/b;
     printf("quotient is : %f\n", quotient);
     difference = a-b;
     printf("difference is : %d\n", difference);
     product = a*b;
     printf("product is : %d\n", product);
     
     return 0;
}