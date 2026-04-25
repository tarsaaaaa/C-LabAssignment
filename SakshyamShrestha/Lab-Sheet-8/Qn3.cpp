/*
    Write a program to draw a circle. The radius of circle is to be asked to user.
*/

#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int radius;
    printf("Enter Radius: ");
    scanf("%d", &radius);

    circle(200, 200, radius);

    getch();
    closegraph();
    return 0;
}