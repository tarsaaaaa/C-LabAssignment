/*
    Two numbers are entered through the keyboard. Write a program to
    find the value of one number raised to the power of another
*/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, ans;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    ans = pow(a, b);
    printf("%d^%d=%d", a, b, ans);
    return 0;
}