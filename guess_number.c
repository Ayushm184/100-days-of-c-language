# include<stdio.h>
int main()
{
    int n,r,q;
    printf("ENTER n");
    scanf("%d",&n);
     r = n%100;
     q = r/10;
     printf("middle number is : %d", q); 
     return 0;

}