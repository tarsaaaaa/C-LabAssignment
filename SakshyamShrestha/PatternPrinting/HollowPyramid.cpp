//    *
//   * *
//  *   *
// *     *
//* * * * *

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            if (k == 0 || k == i-1 || i == 5) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}