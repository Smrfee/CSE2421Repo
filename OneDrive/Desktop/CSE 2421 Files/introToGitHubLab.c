#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Number of elements
    int sum = 0;

    // Loop through the array and add up the elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print the result
    printf("The sum of the array is: %d\n", sum);

    return 0;
}
