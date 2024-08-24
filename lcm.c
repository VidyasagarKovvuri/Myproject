#include <stdio.h>
#include <stdlib.h>

// Function to calculate the Greatest Common Divisor (GCD) using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM using the relationship between GCD and LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to calculate LCM of an array of numbers
int lcm_of_array(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }
    return result;
}

int main() {
    int n;

    // Input the number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));

    // Input the integers
    printf("Enter the integers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate LCM of the array
    int result = lcm_of_array(arr, n);

    // Output the result
    printf("LCM of the entered numbers is %d\n", result);

    // Free the allocated memory
    free(arr);

    return 0;
}

