#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

// check to see that we run with 2 command line arguments
    if (argc < 2)
    {
        printf("Please provide a total of two command-line arguments.\n");
        return 1;
    }
// else... (proceeds below)
    string key = argv[1];
    int keylength = strlen(key);

// check to see if every character of the key is alphabetical
    for (int i = 0; i < keylength; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Please provide an alphabetical string.\n");
            return 1;
        }
    }

// prompt the user for plaintext and prints the plaintext and ciphertext interface
    printf("plaintext: ");
    string plaintext = get_string();

    printf("ciphertext: ");

// iterate over every character in the plaintext
    for (int i = 0, j = 0, n = strlen(plaintext); i < n; i++)
    {
        {
            // uppercase letters, only increment j when an alphabetic character is processed
            if (isupper(plaintext[i]))
            {
                int newUpper = ((plaintext[i] - 'A') + toupper(argv[1][j % keylength]) - 'A') % 26 + 'A';
                printf("%c", newUpper);
                j++;
            }
            // lowercase letters, only increment j when an alphabetic character is processed
            if (islower(plaintext[i]))
            {
                int newLower = ((plaintext[i] - 'a') + tolower(argv[1][j % keylength]) - 'a') % 26 + 'a';
                printf("%c", newLower);
                j++;
            }
            if (isspace(plaintext[i]))
            {
                char space = plaintext[i];
                printf("%c", space);
            }
            if (ispunct(plaintext[i]))
            {
                char punct = plaintext[i];
                printf("%c", punct);
            }
        }
    }
    printf("\n");
}