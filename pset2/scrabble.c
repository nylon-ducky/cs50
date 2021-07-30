#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);




int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    //printf("score1: %i score2: %i \n", score1, score2);
    if (score1 > score2)
    {
        printf("Player 1 wins! \n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins! \n");
    }
    else
    {
        printf("Tie! \n");
    }

}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    // Initialize score variable.
    int score = 0;

    // Count length of word to loop through each letter.
    int wordlen = strlen(word);

    // Loop through each letter of the word or do this for each letter.
    for (int i = 0; i < wordlen; i++)
    {

        char wi = word[i];

        // Check to see if this character is a space. if so, no points.
        if (isspace(wi) || ispunct(wi))
        {
            score = score + 0;
        }
        // Check to see if this char is a capital letter. if so, make lowercase.
        if (isupper(wi))
        {
            wi = tolower(wi);
        }
        // Map letters to go with their SCORES.
        // The index of each letter will match the index of the proper score.
        string letters = "abcdefghijklmnopqrstuvwxyz";
        int letlen = strlen(letters);

        // Loop through each letter, A - Z and see if it matches the current letter of the word
        for (int c = 0; c < letlen; c++)
        {
            char li = letters[c];

            int pc = POINTS[c];

            // If letter in word matches a letter A-Z, update score with number from SCORES
            if (wi == li)
            {
                score = score + pc;
            }

        }

    }

    return score;

}


// cd ~/pset2/scrabble