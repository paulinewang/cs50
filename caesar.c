#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

// get key from command line argument and convert to integer
    if (argc != 2)
    {
        printf("Please provide one command-line argument\n");
        return 1;
    }

// turn key into integer
    string s = argv[1];
    int key = atoi(s);

// prompt for plaintext
    printf("plaintext: ");
    string plain = get_string();

    printf("ciphertext: ");

// for each character in the plaintext string
    for (int i = 0, n = strlen(plain); i < n; i++)
    {
        // checking every character for letter/case, space and punctuation
        if (isupper(plain[i]))
        {
            int newUpper = (plain[i] + key - 65) % 26 + 65;
            printf("%c", newUpper);
        }
        if (islower(plain[i]))
        {
            int newLower = (plain[i] + key - 97) % 26 + 97;
            printf("%c", newLower);
        }
        if (isspace(plain[i]))
        {
            char space = plain[i];
            printf("%c", space);
        }
        if (ispunct(plain[i]))
        {
            char punct = plain[i];
            printf("%c", punct);
        }

    }
    printf("\n");
}