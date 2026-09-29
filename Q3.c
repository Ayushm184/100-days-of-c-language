
//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
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