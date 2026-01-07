/*
    If the marks obtained by a student in five different
    subjects are input through the keyboard. Find out the 
    aggregate marks and percentage marks obtained by the 
    student. Assume the maximum marks obtained by a student 
    in each subjects are 100
*/

#include <stdio.h>

int main() {
    float c, math, sociology, iit, digitalLogic, agg, percentage;
    printf("Enter marks for c: ");
    scanf("%f", &c);
    printf("Enter marks for math: ");
    scanf("%f", &math);
    printf("Enter marks for sociology: ");
    scanf("%f", &sociology);
    printf("Enter marks for iit: ");
    scanf("%f", &iit);
    printf("Enter marks for digitl logic: ");
    scanf("%f", &digitalLogic);
    agg = (c + math + sociology + iit + digitalLogic);
    percentage = agg / 5;
    printf("Aggregate=%.2f\nPercentage=%.2f", agg, percentage);
    return 0;
}