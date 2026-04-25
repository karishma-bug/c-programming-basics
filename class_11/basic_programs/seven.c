//7. find distance travelled by body
#include <stdio.h>

int main()
{  
    float u = 2, t = 20, a = 5.5;
    float distance = (u * t) + (1.0/2 * a * t * t);
    printf("Initial velocity: %2.f , Time : %.2f, Acceleration: %.2f \n", u,t,a);
    printf("Distance travelled : %.2f meters", distance);
    printf("\n\n Karishma Dawadi, Eleven('E') , 222");
    return 0;
}