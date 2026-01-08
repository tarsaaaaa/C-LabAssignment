/*
    Two numbers are entered through the keyboard. Write a program to
    find the value of one number raised to the power of another
*/

#include <stdio.h>

int main() {
    int a,b, ans=1;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    for(int i=0; i<b; i++) {
        ans*=a;
    }
    printf("%d^%d=%d", a, b, ans);
    return 0;
}