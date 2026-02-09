//*  
//*  *  
//*  *  *  
//*  *  *  *  
//*  *  *  *  *  
//*  *  *  *  *  *  
//*  *  
//*  *  *  
//*  *  *  *  
//*  *  *  *  *  
//*  *  *  *  *  *  

#include <stdio.h>

int main() {
    bool topHalf = true;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*  ");
        }
        printf("\n");
        if (i == 6 && topHalf) {
            topHalf = false;
            i = 1;
        }
    }
    return 0;
}