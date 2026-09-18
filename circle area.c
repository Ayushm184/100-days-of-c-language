# include<stdio.h>
int main()
{
    float r,Circumference,Area;
    printf("ENTER RADIUS");
    scanf("%f",&r);
    Circumference = 2*3.14*r;
    Area = r*3.14*3.14;
    printf("Area is : %f\n",Area);
    printf("Circumference is : %f\n",Circumference);

    return 0;
}