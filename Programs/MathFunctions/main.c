#include <stdio.h>
#include <math.h>

int add(int a, int b)   {
    return a+b;
}

int power(int a, int b)   {
    int i, _power=a;
    
    for(i=1; i<b; i++)  {
            _power*=a; 
    }   
    return _power;
}

int sub(int a, int b)   {
    return a-b;
}

int mul(int a, int b)   {
    return a*b;
}

int div(int a, int b)   {
   return a/b;
}

int main()  {
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    printf("Addition: %d \n", add(x,y));
    printf("Subtraction: %d \n", sub(x,y));
    printf("Multiplication: %d \n", mul(x,y));
    printf("Division: %d \n", div(x,y));
    printf("Power: %d \n", power(x,y));
}