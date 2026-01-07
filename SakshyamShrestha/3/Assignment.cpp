#include<stdio.h>

int main() {
    int r;
    printf("Enter radius of circle");
    scanf("%d", &r);
    printf("Area = %.2f\ncircumference = %.2f", 3.14*r*r, 2*3.14*r);
    return 0;
}