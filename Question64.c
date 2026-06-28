// Program to find duplicates in an array

#include<stdio.h>
int main() {
    int arr[] = {1,2,3,3,4};
    int n = 5;
    printf("Duplicate no. is : ");

        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(arr[i] == arr[j]){
                    printf("%d", arr[i] );
                    break;
                }
            }
        }
    return 0;
}