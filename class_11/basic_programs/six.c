//6. find simple interest and total amount 
#include <stdio.h>

int main()
{  
    float principal = 20000, rate=10, no_of_years=5;
    float simple_interest = (principal * rate * no_of_years)/100;
    float total_amount = principal + simple_interest;
    printf(" Principal : %.2f , Rate : %.2f  and No of years : %.2f \n", principal, rate, no_of_years);
    printf("Simple Interest : %.2f \n", simple_interest);
    printf("Total Amount : %.2f", total_amount);
    
    printf("\n\n Karishma Dawadi, Eleven('E') , 222");
    return 0;
}