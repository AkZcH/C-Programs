#include <stdio.h>

// Function to swap two elements
void swap914(int *a914, int *b914) {
    int temp914 = *a914;
    *a914 = *b914;
    *b914 = temp914;
}

// Function to generate all permutations of the array
void generatePermutations914(int arr914[], int start914, int end914) {
    if (start914 == end914) {
        // If we reached the end, print the current permutation
        for (int i914 = 0; i914 <= end914; i914++) {
            printf("%d ", arr914[i914]);
        }
        printf("\n");
    } else {
        // Recursively generate permutations
        for (int i914 = start914; i914 <= end914; i914++) {
            // Swap the current element with the start element
            swap914(&arr914[start914], &arr914[i914]);

            // Recursively call generatePermutations for the next index
            generatePermutations914(arr914, start914 + 1, end914);

            // Backtrack to restore the original array before the next iteration
            swap914(&arr914[start914], &arr914[i914]);
        }
    }
}

int main() {
    int arr914[] = {1, 2, 3};
    int n914 = sizeof(arr914) / sizeof(arr914[0]);

    printf("All permutations of the array are:\n");
    generatePermutations914(arr914, 0, n914 - 1);

    return 0;
}
