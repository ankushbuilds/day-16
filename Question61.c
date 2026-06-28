#include <stdio.h>

int main() {
    int arr[] = {1,2,4,5,6};
    int n = 6;

    int originalSum = 0;
    int expectedSum = n * (n + 1) / 2;

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        originalSum += arr[i];
    }

    int missingNum = expectedSum - originalSum;

    printf("Missing no. : %d", missingNum);

    return 0;
}