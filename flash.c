#include<stdio.h>

int main()
{
    int row, col;

    for(row = 0; row < 7; row++)
    {
        for(col = 0; col < 45; col++)
        {
            // K
            if(col == 0 ||
               (row + col == 5) ||
               (row - col == 1))
                printf("*");

            // A
            else if((col == 8 && row != 0) ||
                    (col == 12 && row != 0) ||
                    (row == 0 && col > 8 && col < 12) ||
                    (row == 3 && col > 8 && col < 12))
                printf("*");

            // R
            else if((col == 15) ||
                    (row == 0 && col > 15 && col < 19) ||
                    (row == 3 && col > 15 && col < 19) ||
                    (col == 19 && row > 0 && row < 3) ||
                    (row - col == -16 && row > 3))
                printf("*");

            // T
            else if((row == 0 && col > 21 && col < 27) ||
                    (col == 24))
                printf("*");

            // H
            else if((col == 29 || col == 33) ||
                    (row == 3 && col > 29 && col < 33))
                printf("*");

            // I
            else if((row == 0 && col > 35 && col < 40) ||
                    (row == 6 && col > 35 && col < 40) ||
                    (col == 37))
                printf("*");

            // K
            else if(col == 42 ||
                    (row + col == 46) ||
                    (row - col == -40))
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}