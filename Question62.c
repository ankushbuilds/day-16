#include <stdio.h>

int main() {
    int arr[] = {1, 5, 2, 2, 6};
    int n = 5;

    int maxElem = arr[0];
    int maxFreq = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxFreq) {
            maxFreq = count;
            maxElem = arr[i];
        }
    }

    printf("Maximum frequency element: %d\n", maxElem);

    return 0;
}