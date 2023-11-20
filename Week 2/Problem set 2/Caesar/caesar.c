#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

// one command-line arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

// every character is digit
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

// convert string to integer
    int key = atoi(argv[1]);

// output plaintext:
    string plaintext = get_string("Plaintext: ");
    printf("Ciphertext: ");

    for (int i = 0; i < strlen(plaintext); i++)
    {
        // lower case
        if (islower(plaintext[i]))
        {
            // bring value to 0 by sustructing a. loop to stay in alphabetic only. % is mod, reminder from division before using decimal point, back to + a to original value
            printf("%c", (((plaintext[i] - 'a') + key) % 26) + 'a');
        }
        // upper case
        else if (isupper(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 'A') + key) % 26) + 'A');
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;

}
