# include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a");
    scanf("%d", &a);
    printf("Enter b");
    scanf("%d", &b);
    c = a*b;
    a = c/a;
    b = c/b;
    printf(" swaped value is : %d %d", a,b);
    return 0;
}