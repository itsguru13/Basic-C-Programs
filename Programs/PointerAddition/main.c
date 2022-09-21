#include <stdio.h>

int main()  {
    int *p, *q, a, b;
    p = &a;
    q = &b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    int sum = *p + *q;
    printf("Result: %d \n", sum);
}