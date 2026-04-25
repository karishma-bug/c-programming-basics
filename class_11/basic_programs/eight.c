//8. find area and volume of a sphere
#include <stdio.h>

int main()
{
    float PI = 3.14159;
    float radius;

    printf("Enter radius of sphere: ");
    scanf("%f", &radius);

    float volume = (4.0/3) * PI * radius * radius * radius;
    float area   = 4 * PI * radius * radius;

    printf("Volume of sphere : %.2f\n", volume);
    printf("Area of sphere   : %.2f\n", area);
    printf("\n\n Karishma Dawadi, Eleven('E') , 222");
    return 0;
}