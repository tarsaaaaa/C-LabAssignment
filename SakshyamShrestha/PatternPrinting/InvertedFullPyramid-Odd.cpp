//*********
// *******
//  *****
//   ***
//    *

#include <stdio.h>

int main() {
    for (int i = 5; i > 0; i--)
    {
        for (int j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < (i * 2)-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}