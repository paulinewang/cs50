#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    float change_dollar;
//prompt user for input and validate if it's a positive value
    do
    {
        printf("Change owed: ");
        change_dollar = get_float();
    }
    while (change_dollar < 0);

//convert the amount of change owed to cents, and convert from float to integer
    float change_cents = change_dollar * 100;
    int change_owed = round(change_cents);

//printf("%i\n", change_owed);

//declare the variable that stores the amount of coins
    int coins = 0;

//while the amount of cents of the coin still 'fits' in change_owed, add a coin and subtract the amount of 1 coin
    while (change_owed >= 25)
    {
        coins++;
        change_owed -= 25;
    }
    while (change_owed >= 10)
    {
        coins++;
        change_owed -= 10;
    }
    while (change_owed >= 5)
    {
        coins++;
        change_owed -= 5;
    }
    while (change_owed >= 1)
    {
        coins++;
        change_owed -= 1;
    }

//print the amount of coins
    printf("%i\n", coins);
}