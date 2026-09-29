//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
# include<stdio.h>
int main()
{
    int num;
    int Rev=0,org;
    printf("enter a number");
    scanf("%d",&num);
     
    org = num;
     
     while(num!=0){
        Rev = Rev*10 + num%10 ;
        num=num/10;
    }

    if (org==Rev)
    {
        printf("it is a palindrome number"); 
    }
    else{
        printf("not a plaindrome number");
     }
     return 0;
}