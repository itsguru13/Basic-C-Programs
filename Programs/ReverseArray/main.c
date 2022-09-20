#include <stdio.h>
#include <stdlib.h>

int main(){
    int  n, temp;
    
    int arr[]={26,28,37,26,33,31,29};
    n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
}