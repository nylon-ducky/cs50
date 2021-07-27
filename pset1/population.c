/*
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int starting_population;
    do
    {
        starting_population = get_int("Please enter a starting number of llamas greater than or equal to 9: \n");
    }
    while (starting_population <= 8);

    // TODO: Prompt for end size
    int end_population;
    do
    {
        end_population = get_int("please enter an ending population size greater than or equal to starting size: \n");
    }
    while (end_population < starting_population);

    // TODO: Calculate number of years until we reach threshold
    float new_llamas = starting_population / 3;

    float dead_llamas = starting_population / 4;

    float per_year_llamas = new_llamas - dead_llamas;


    int years = 0;

    while (starting_population < end_population)
    {
        starting_population = starting_population + (starting_population / 3) - (starting_population / 4);
        years++;
    }
    // TODO: Print number of years
    /*
    printf ("starting population: %i \n", starting_population);
    printf ("end population: %i \n", end_population);
    
    printf("Years: %i", years);
}
*/