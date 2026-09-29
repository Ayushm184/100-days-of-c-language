//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
# include<stdio.h>
int main()
{
    int number;
    
    printf("Enter your number");
    scanf("%d",&number);
    

    if (number<=100 && number>=90)
    {
    printf("grade = A");
    }
    else if (number<=89 && number>=80)
    {
        printf("grade = B");
    }
    else if (number<=79 && number>=60 )
    {
       printf("grade = c");
    }
    else if(number<=59 && number>= 40)
    {
    printf("grade=D");
    }
    else if (number<=39 && number>=0)
    {
        printf("grade = F");
    }
        return 0;
}

    
        
    
    
    
