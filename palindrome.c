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