#include <stdio.h>

int main() {
    int x,
    y;int
    temp;
    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("\nEnter value of y");
    scanf("%d", &y);
    
    temp = x;
    x = y;
    y = temp;
    printf("\nAfter swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    return 0;
}
