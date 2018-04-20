#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int spaces;
    int hashes;

// prompt user for input and validate if between 0 and 23 inclusive.
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while (height < 0 || height > 23);
    
    for (int i = 0; i < height; i++) 
    {
        for (spaces = (height - i - 2); spaces >= 0; spaces--) 
        {
            printf(" ");
        } 
        for (hashes = 0; hashes <= (i + 1); hashes++) 
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}