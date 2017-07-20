#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
float n;
// prompting user for input + validation
    do 
    {
        printf("O hai! How much change is owed?\n");
        n = get_float();
    }
    while (n < 0);
    
// convert amount from dollars into cents (from float to integer)
    float change = n * 100;
    int change_cents = round(change);
//    printf("%i\n", change_cents); 
    
// use the largest coin possible and keep track of the coins used
int coins = 0;

    while (change_cents >= 25) 
    {
        coins++;
        change_cents -= 25;
    }
    while (change_cents >= 10) 
    {
        coins++;
        change_cents -= 10;
    }
    while (change_cents >= 5) 
    {
        coins++;
        change_cents -= 5;
    }
    while (change_cents >= 1) 
    {
        coins ++;
        change_cents -= 1;
    }

// printing amount of coins 
printf("%i\n", coins);
    
}