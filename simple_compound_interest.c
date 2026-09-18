# include<stdio.h>
# include<math.h>
int main()
{
    float SI,time,rate,principal,compoundInterest,amount;
    printf("enter principal,rate,time");
    scanf("%f %f %f",&principal ,&rate, &time);

    SI = (principal*rate*time)/100;
     amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("Compound Interest = %.2f\n", compoundInterest);
    printf ("SIMPLE INTREST IS :%f\n",SI);
    return 0;

    
}