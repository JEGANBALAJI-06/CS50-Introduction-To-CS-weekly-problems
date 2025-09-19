#include <cs50.h>
#include <stdio.h>
int get_quarters(int cents);
int get_dimes(int cents);
int get_nickels(int cents);
int get_pennies(int cents);
int main(void)
{
    int cents;
    do
    {

    cents = get_int("Enter the cents: ");
    }
    while(cents<0);


    int quarters = get_quarters(cents);
    cents = cents - (quarters * 25);

    int dimes = get_dimes(cents);
    cents = cents - (dimes * 10);

    int nickels = get_nickels(cents);
    cents = cents - (nickels * 5);

    int pennies = get_pennies(cents);
    cents = cents - (pennies * 1);

    int total = quarters + dimes + nickels + pennies;
    printf("%i\n" , total);
}


int get_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

int get_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}

int get_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents = cents - 5;
    }
    return nickels;
}

int get_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents = cents - 1;
    }
    return pennies;
}

