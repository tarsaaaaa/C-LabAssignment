//* * * * * *
//*         *
//*         *
//*         *
//* * * * * *

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j==0 || j == 5 || i==0 || i == 4) printf("* ");
            else printf ("  ");
        }
        printf("\n");
    }
    
    return 0;
}