#include <stdio.h>

int main()  {
    int i, arr[5];

    for(i=0; i<5; i++)  {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements are: \n");
    for(i=0; i<5; i++)  {
        printf("arr[%d]: %d \n",i, arr[i]);
    }

    return 0;
    getchar();
}