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