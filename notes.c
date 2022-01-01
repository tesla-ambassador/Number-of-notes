#include <stdio.h>

int main(void)
{
    // Prompt the user for input.
    long input;
    printf("Please input the amount of money you have in UGX: ");
    scanf("%ld", &input);

    // Calculating the number of notes.
    // Method 1
    int counter = 0;
    for (int i = 0; i < input; i++)
    {
        while (input >= 50000)
        {
            input -= 50000;
            counter++;
        }
        while (input >= 20000)
        {
            input -= 20000;
            counter++;
        }
        while (input >= 10000)
        {
            input -= 10000;
            counter++;
        }
        while (input >= 5000)
        {
            input -= 5000;
            counter++;
        }
        while (input >= 2000)
        {
            input -= 2000;
            counter++;
        }
        while (input >= 1000)
        {
            input -= 1000;
            counter++;
        }
    }

    printf("You will need %d note(s)", counter);

    // Method 2
    // for (int i = 0; i <= input; i++)
    // {
    //     if (input % 50000 == 0)
    //     {
    //         counter++;
    //     }
    //     if (input % 20000 == 0)
    //     {
    //         counter++;
    //     }
    //     if (input % 10000 == 0)
    //     {
    //         counter++;
    //     }
    //     if (input % 5000 == 0)
    //     {
    //         counter++;
    //     }
    //     if (input % 2000 == 0)
    //     {
    //         counter++;
    //     }
    //     if (input % 1000 == 0)
    //     {
    //         counter++;
    //     }
    // }

    // printf("You will need %d notes", counter);
}