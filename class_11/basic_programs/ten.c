//9. find area of traingle
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float semi, area;

    printf("Enter side a : ");
    scanf("%f", &a);

    printf("Enter side b : ");
    scanf("%f", &b);

    printf("Enter side c : ");
    scanf("%f", &c);

    semi = (a + b + c) / 2;
    // sqrt function from math.h
    area = sqrt(semi * (semi - a) * (semi - b) * (semi - c));

  
    printf("Area of triangle : %.2f\n", area);
    printf("\n\n Karishma Dawadi, Eleven('E') , 222");
    return 0;
}