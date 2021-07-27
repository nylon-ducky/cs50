#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare variables
    int height, line, line_width, step, original_height;
    string spaces, hash;

    //prompt user for height of 1 to 8 inclusive
    do
    {
        height = get_int("please choose height between 1 and 8 inclusive: \n");
    }
    while (height > 8 || height < 1);

    //assign values to other variables
    original_height = height;
    spaces = " ";
    hash = "#";


    //loop through for each line
    for (step = 0; step < height; step++)
    {


        //spaces to ensure pyramid shape
        for (int pyramid = height; pyramid > step + 1; pyramid--)
        {
            printf("%s", spaces);
        }


        //first set of hashes
        for (line = 0; line < step + 1; line++)
        {
            line_width = printf("%s", hash);
        }



        //two spaces seperating hashes
        printf("%s", spaces);
        printf("%s", spaces);


        //second set of hashes
        for (line = 0; line < step + 1; line++)
        {
            line_width = printf("%s", hash);
        }


        printf("\n");

    }



}



// Below is whatg I  was trying to use to solve this before I realized I needed to tie everything to the variable step from the loop containing all other loops.

// For this one, I had been struggling because I was tieing everything to the variable height. But I had something else I nmeeded to do today and when I came back to it some hours later, I realized what I was doing wrong.



/*

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare variables
    int height, line, line_width, step, original_height;
    string spaces, hash;

    //prompt user for height of 1 to 8 inclusive
    do
    {
        height = get_int("please choose height between 1 and 8 inclusive: \n");
    }
    while (height > 8 || height < 1);

    //assign values to other variables
    original_height = height;
    spaces = " ";
    hash = "#";

    for (int i = 0; i <= height; i++)
    {
        printf("\n");
    }

    for (step = 0; step <= height; height--)
    {


        for (int pyramid = 0; pyramid < height; pyramid++)
        {
            printf ("%s", spaces);
        }



        for (line = 0; line < height; line++)
        {
            line_width = printf ("%s", hash);
        }



        printf ("%s", spaces);
        printf ("%s", spaces);



        for (line = 0; line < height; line++)
        {

            line_width = printf ("%s", hash);
            //printf("\n");
            //printf("\n");

        }


        printf("\033[F");


    }

    printf("\r");

}


*/