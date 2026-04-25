/*
    Write a program to draw a rectangle. The length and breadth of rectangle should be taken from user.
*/

#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int length, breadth;
    printf("Enter\nLength: ");
    scanf("%d", &length);
    printf("Breadth: ");
    scanf("%d", &breadth);

    rectangle(100, 100, 100 + length, 100 + breadth);

    getch();
    closegraph();
    return 0;
}