#include <stdio.h>

int main() {
    int x, y;


    printf("Enter the X coordinate: ");
    scanf("%d", &x);
    printf("Enter the Y coordinate: ");
    scanf("%d", &y);

    // Determine the quadrant
    if (x > 0 && y > 0) {
        printf("The point (%d, %d) lies in the First Quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%d, %d) lies in the Second Quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%d, %d) lies in the Third Quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%d, %d) lies in the Fourth Quadrant.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("The point (%d, %d) lies on the Y-axis.\n", x, y);
    } else if (y == 0 && x != 0) {
        printf("The point (%d, %d) lies on the X-axis.\n", x, y);
    } else {
        printf("The point (%d, %d) is at the Origin.\n", x, y);
    }

    return 0;
}