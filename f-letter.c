#include <stdio.h>
/**
 * Description-Write a C program to print a block F using the hash (#), where the F has a height of six characters and width of five and four characters.
 */

int main()
{
    int i, j;

    for (i = 0; i <= 6; i++) {
        for (j = 0; j <= 5; j++) {
            if (i == 0 && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5))
                printf("#");
            else if (j == 0)
                printf("#");
            else if (i == 3 && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4))
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
