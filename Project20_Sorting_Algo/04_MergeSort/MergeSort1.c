#include <stdio.h>
#include <stdlib.h>
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int* merge(int* left, int* right, int leftSize, int rightSize) {
    int* merged = (int*)malloc((leftSize + rightSize) * sizeof(int));
    int i = 0, j = 0, k = 0;

    // Merge elements from left and right arrays in sorted order
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            merged[k++] = left[i++];
        } else {
            merged[k++] = right[j++];
        }
    }

    // Add remaining elements from the left array
    while (i < leftSize) {
        merged[k++] = left[i++];
    }

    // Add remaining elements from the right array
    while (j < rightSize) {
        merged[k++] = right[j++];
    }

    return merged;
}

int* mergeSort(int* arr, int size) {
    // Base case: arrays with 0 or 1 element are already sorted
    if (size <= 1) {
        int* singleElement = (int*)malloc(size * sizeof(int));
        if (size == 1) {
            singleElement[0] = arr[0];
        }
        return singleElement;
    }

    // Find the middle index
    int mid = size / 2;

    // Recursively sort the left and right halves
    int* leftSorted = mergeSort(arr, mid);
    int* rightSorted = mergeSort(arr + mid, size - mid);
    printf("Left Part : ");
    printArray(leftSorted ,mid);
    printf("\n Right Part : ");
    printArray(rightSorted , size - mid);
    // Merge the sorted halves
    int* sortedArray = merge(leftSorted, rightSorted, mid, size - mid);
    printf("\n Sorted : ");
    printArray(sortedArray, size);
    // Free the temporary sorted arrays
    free(leftSorted);
    free(rightSorted);

    return sortedArray; //return as sorted one to same function call -> recurrsion
}


int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, arrSize);

    int* sortedArr = mergeSort(arr, arrSize);

    printf("Sorted array:\n");
    printArray(sortedArr, arrSize);

    // Free the sorted array
    free(sortedArr);

    return 0;
}
