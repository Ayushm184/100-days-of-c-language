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

    
        
    
    
    
