# include <stdio.h>
int main()
{
    float lenght,breath,perimeter,area;
    printf("enter lenght");
    scanf("%f",&lenght);
    printf("enter breath");
    scanf("%f",&breath);
    area=lenght*breath*3.14;
    printf("area is :%f\n",area);
    perimeter = 2*(lenght+breath);
    printf("perimeter is :%f\n",perimeter);

    return 0;
}