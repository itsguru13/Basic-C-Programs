#include <stdio.h>

int main()  {
    char name[25];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s!", name);
    
    return 0;
}