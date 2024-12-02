#include <stdio.h>

int main()
{
    float interest, principal = 5000, years = 4, rate = 8;
    interest = principal * rate * years;
    printf("The interest is %f", interest);
    return 0;
}