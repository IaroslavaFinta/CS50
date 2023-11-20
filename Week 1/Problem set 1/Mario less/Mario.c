#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        // get int as input from user. valid is only between 1 and 8. if invalid input, repromt the question
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    // row
    for (int r = 0; r < h; r++)
    {
        // column
        for (int c = 0; c < h; c++)
        {

            // rule to have dots and hashes for each row and column
            if (r + c >= h - 1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}