//    *
//   * *
//  * * *
// * * * *
//* * * * *
// * * * *
//  * * *
//   * * 
//    *

#include <stdio.h>

int main() {
    int i = 1;
    bool topHalf = true;
    while (i != 0)
    {
        for (int j = 0; j < 5-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");
        if (i == 5) topHalf = false;
        i = topHalf? i+1: i-1;   
    }
    return 0;
}