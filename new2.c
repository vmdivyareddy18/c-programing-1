#include <stdio.h>

int main() {
    int x,
    y;int
    temp;
    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("\nEnter value of y");
    scanf("%d", &y);
    printf("\nBefore swapping: x = %d, y = %d", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("\nAfter swapping:x = %d, y = %d\n", x, y);

    return 0;
}
