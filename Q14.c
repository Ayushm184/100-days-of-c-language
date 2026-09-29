//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
# include<stdio.h>
int main()
{
   char alphabet;
   printf("enter your character");
   scanf("%c" ,&alphabet); 
  
   if(alphabet=='a' ||alphabet=='e' || alphabet=='i' ||  alphabet=='o' ||  alphabet=='u')
   printf("alphabet is vowel %c",alphabet);
   
   else
   printf("alphabet is consonent %c",alphabet );
   return 0;

}