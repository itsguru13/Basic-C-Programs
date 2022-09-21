#include <stdio.h>

int main()  {
    int *p, *q, a, b;
    p = &a;
    q = &b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if(*p > *q) {
        printf("%d is bigger \n", *p);
    } else {
        printf("%d is bigger \n", *q);
    }
    return 0; 
}