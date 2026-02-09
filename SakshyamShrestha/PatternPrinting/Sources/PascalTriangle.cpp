//    1
//   1 1
//  1 2 1
// 1 3 3 1
//1 4 6 4 1

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
            printf(" ");
        }
        int k = 1; 
        for (int l = 1; l <= i; l++) {
            printf("%d ", k);
            k = k * (i - l) / l;
        }
        printf("\n");
    }
    return 0;
}