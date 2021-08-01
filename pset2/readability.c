/*
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int analize(string txt);
int calc(int let, int spa, int per);
string printscore(int sc);
int spaces = 1, letters = 0, periods = 0, score = 0;

int main(void)
{
    // Get text input
    string txt = get_string("Text: ");

    // Analize and count letters, sentances, and words
    analize(txt);

    // Calculate grade level
    calc(letters, spaces, periods);

    // Print out grade level or less than grade 1 or greater than grade 16
    printscore(score);

}



int analize(string txt)
{
    // Get length of text
    long txtlen = strlen(txt);

    // Loop through each digit of the text to count letters, words, and sentances
    for (int i = 0; i < txtlen; i++)
    {

        if (isalpha(txt[i]))
        {
            letters++;
        }

        if (isspace(txt[i]))
        {
            spaces++;
        }

        if (txt[i] == '.' || txt[i] == '!' || txt[i] == '?')
        {
            periods++;
        }


    }

    return letters;
    return spaces;
    return periods;

}

int calc(int let, int spa, int per)
{
    // Calculate grade level using all floats then round to an int for final result
    float x = 100 / (float) spa;
    float L = let * x;
    float S = per * x;

    score = round((0.0588 * L) - (0.296 * S) - 15.8);

    return score;
}

// Show grade level or suitable for grades below 1 or above 16
string printscore(int sc)
{
    if (sc > 1 && sc <= 16)
    {
        printf("Grade %i\n", score);
    }
    else if (sc < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade 16+\n");
    }

    return 0;

}






// cd ~/pset2/readability
// make readability
// 9  There are more things in Heaven and Earth, Horatio, than are dreamt of in your philosophy.
*/