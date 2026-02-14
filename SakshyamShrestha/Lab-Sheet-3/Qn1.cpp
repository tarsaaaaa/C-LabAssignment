/*
    Write a program that asks the user to enter 10 numbers, reads them
    into an array and finds sum, product, average and maximum of all
    numbers and prints them
*/

#include <stdio.h>

int main() {
    int arr[10], sum = 0, prod = 1, max=0;
    float avg;
    printf("Enter 10 numbers\n");
    for (int  i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
        prod*=arr[i];

        if (arr[i] > max) {
            max=arr[i];
        }
    }
    avg = sum / 10;
    printf("Sum=%d\nProduct=%d\nAverage=%.2f\nMax=%d", sum, prod, avg, max);
    return 0;
}