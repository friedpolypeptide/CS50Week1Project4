#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float dollar = get_float("dollar amount?\n");
    while (dollar < 0)
    {
        printf("please enter a positive amount\n");
        dollar = get_float("dollar amount?\n");
    }
    int cents = round(dollar * 100);
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        quarters++;
    }
    while (cents >= 10)
    {
        cents = cents - 10;
        dimes++;
    }
    while (cents >= 5)
    {
        cents = cents - 5;
        nickels++;
    }
    while (cents >= 1)
    {
        cents = cents - 1;
        pennies++;
    }
    printf("that'll be %i quarters, %i dimes, %i nickels, and %i pennies\n", quarters, dimes, nickels, pennies);
}
