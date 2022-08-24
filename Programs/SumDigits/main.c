#include <stdio.h>

int main()  {
    int x, s, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    while(x > 0)    {
        s = x % 10;
        sum = sum + s;
        x = x / 10;
    }
    
    printf("Sum of the digit: %d", sum);

    return 0;
}