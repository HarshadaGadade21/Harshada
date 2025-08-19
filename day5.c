#include <stdio.h>

void findLeaders(int arr[], int n) {
    int leaders[n], count = 0;
    int maxRight = arr[n-1];
    leaders[count++] = arr[n-1];  
    
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            leaders[count++] = arr[i];
            maxRight = arr[i];
        }
    }
    for (int i = count-1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    findLeaders(arr, n);
    return 0;
}
