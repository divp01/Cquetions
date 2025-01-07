#include <stdio.h>

// Function to find the smaller of two numbers
int smallNumber(int a, int b) {
    return (a >= b) ? b : a;
}

// Recursive function to find the smallest element in the array
int SmallestElement(int *arr, int index, int size) {
    if (index == size - 1) {
        return arr[index]; // Base case: Last element
    }

    // Recursive call
    int minInRest = SmallestElement(arr, index + 1, size);

    // Compare current element with the minimum of the rest
    return smallNumber(arr[index], minInRest);
}

int main(void) {
    int arr[] = {1, 2, 4, 0, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = SmallestElement(arr, 0, size);
    printf("The smallest element is: %d\n", smallest);

    return 0;
}
