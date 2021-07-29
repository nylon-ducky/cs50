//#include <stdio.h>
//#include <cs50.h>


int main(void)
{

    // Ask for card number until input is 12 digits or more
    long number = get_long("Please enter card number: \n");


    // Count digits
    int i = 0;
    long num_count = number;

    do
    {
        num_count = num_count / 10;
        i++;
    }
    while (num_count > 0);


    // Initialize variables
    long digits = number;
    int idig = 0;
    int sum1 = 0;
    int sum2 = 0;
    int mod, mod1, dbl, dbl_one, total;

    // Make sure number is one of three possible lengths
    if (i == 13 || i == 15 || i == 16)
    {


        // Luhns algorithm
        do
        {

            mod = digits % 10;
            digits = digits / 10;
            sum1 = sum1 + mod;

            mod1 = digits % 10;
            digits = digits / 10;

            mod1 = mod1 * 2;

            dbl = mod1 % 10;
            dbl_one = mod1 / 10;
            sum2 = sum2 + dbl + dbl_one;

        }
        while (digits > 0);

        total = sum1 + sum2;
        //printf("Total: %i \n", total);

        // Check algorithm
        if (total % 10 != 0)
        {
            printf("INVALID\n");
            return 0;
        }


        long first = number;

        // Get first two digits
        if (total % 10 == 0)
        {

            do
            {
                first = first / 10;
            }
            while (first > 100);
            //printf ("first: %li \n", first);
        }

        else
        {
            printf("INVALID\n");
        }


        if (first / 10 == 4)
        {
            printf("VISA\n");
        }
        else if ((first / 10 == 3) && (first % 10 == 4 || first % 10 == 7))
        {
            printf("AMEX\n");
        }
        else if ((first / 10 == 5) && (first % 10 < 6 && first % 10 > 0))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }

    }

    else
    {
        printf("INVALID\n");
    }


}


// 4003600000000014

// cd ~/pset1/credit

// check50 cs50/problems/2021/x/credit
