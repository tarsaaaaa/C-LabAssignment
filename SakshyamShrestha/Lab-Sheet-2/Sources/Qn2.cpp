/*
    Write a program to print out all the Armstrong
    numbers between 1-500
*/

#include <stdio.h>

int main() {
    int sum, o, t, h;
    for(int i = 1; i <= 500; i++) {
        o = i%10;
        t = (i/10)%10;
        h = (i/100)%10;
        sum = h > 0 ? (h*h*h) + (t*t*t) + (o*o*o) : t > 0 ? (t*t) + (o*o) : o;
        if (sum == i) {
            printf("%d\t", i);
        }
    }
    return 0;
}