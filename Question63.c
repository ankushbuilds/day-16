#include <stdio.h>

int main() {
    int targetSum = 7;
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    printf("Pairs are: ");

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  // avoid duplicate & same index
            if (arr[i] + arr[j] == targetSum) {
                printf("(%d, %d) ", arr[i], arr[j]);
            }
        }
    }

    return 0;
}