#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, temp, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)  {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
}