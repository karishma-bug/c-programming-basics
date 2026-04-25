//9. find total from price and quantity
#include <stdio.h>

int main()
{
    int quantity;
    float price, total;

    printf("Enter quantity : ");
    scanf("%d", &quantity);

    printf("Enter price    : ");
    scanf("%f", &price);

    total = quantity * price;

    printf("Total bill : %.2f\n", total);
    printf("\n\n Karishma Dawadi, Eleven('E') , 222");
    return 0;
}