#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int k = atoi(argv[1]);

    string plaintext = get_string("plaintext:  ");

    printf("ciphertext: ");

    for (int i = 0; i < strlen(plaintext); i++)
    {
        char c = plaintext[i];

        if (isupper(c))
        {
            char encrypted = ((c - 'A' + k) % 26) + 'A';
            printf("%c", encrypted);
        }
        else if (islower(c))
        {
            char encrypted = ((c - 'a' + k) % 26) + 'a';
            printf("%c", encrypted);
        }
        else
        {
            printf("%c", c);
        }
    }

    printf("\n");
    return 0;
}
