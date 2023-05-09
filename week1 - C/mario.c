#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, i, j, k;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //row loop
    for (i = 0; i < height; i++)
    {
        //space loop
        for (k = 0; k < height - i - 1; k++)
        {
            printf(" ");
        }
        //# loop
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}