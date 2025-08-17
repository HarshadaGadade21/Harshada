#include <stdio.h>

int main() {
    int arr[] = {3, 1, 3, 4, 2};  
    int n = sizeof(arr) / sizeof(arr[0]); 

    int slow = arr[0];
    int fast = arr[0];

    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    printf("Duplicate number: %d\n", slow);
    return 0;
}
