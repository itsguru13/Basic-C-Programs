#include <stdio.h>

int main()  {
    int x, y, largest;

    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    
    largest = x>y ? x : y;

    printf("Largest Number: %d", largest);

    return 0;

}