# include<stdio.h>
int main()
{
    float CELSIUS, Fehrenheit;
    printf("ENTER TEMPERATURE IN CELSIUS");
    scanf("%f",&CELSIUS);
    Fehrenheit = (CELSIUS*1.8)+32;
    printf("Fehrenheit IS :%f\n", Fehrenheit);
    return 0;    
}
  