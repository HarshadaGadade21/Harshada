#include <stdio.h>

int main() {
    int num, i;
    printf("Enter n (total numbers expected including missing one): ");
    scanf("%d", &num);

    int arr[num-1];
    printf("Enter %d numbers:\n", num-1);
    for (i = 0; i < num-1; i++) {
        scanf("%d", &arr[i]);
    }

    long long total_sum = (long long)num * (num + 1) / 2; 
    long long arr_sum = 0;

    for (i = 0; i < num-1; i++) {
        arr_sum += arr[i];
    }

    printf("Missing number: %lld\n", total_sum - arr_sum);

    return 0;
}
