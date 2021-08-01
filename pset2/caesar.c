/*

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Make sure theres an additional argument for the key
    if (argc != 2)
    {
        printf("Usage: ./caesae key \n");
        return 1;
    }

    // Make sure that argument is an int
    int args = strlen(argv[1]);
    for (int i = 0; i < args; i++)
    {
        if (isalpha(argv[1][i]))
        {
            printf("Usage: ./caesae key \n");
            return 1;
        }
    }
    //printf("argslen: %i args: %s \n", args, argv[argc - 1]);

    // Turn string into an int for the key to work properly
    int key = atoi(argv[1]) % 26;
    //printf("key: %i \n", key);


    // Get text to encript
    string plaintxt = get_string("Text: ");

    // Start printing cyphertext
    printf("ciphertext: ");

    // Loop through each letter of text
    for (int n = 0; n < strlen(plaintxt); n++)
    {

        // Isolate the single letter
        int pi = plaintxt[n];

        // If its not a letter, print it out as is
        if (!isalpha(pi))
        {
            printf("%c", plaintxt[n]);
            continue;
        }


        // make sure this number stays within the bounds of the alphabet characters
        // caps 65 - 90  lowers 97 - 122  specials 91- 96

        pi = pi + key;

        if (pi > 91 && pi < 96)
        {
            pi = pi - 26;
        }

        if (pi > 122)
        {
            pi = pi - 26;
        }


        // Print the letter
        printf("%c", pi);

    }

    printf("\n");

}


*/