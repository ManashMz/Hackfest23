#include <stdio.h>

int main() {
    // Declare an array of integers
    int numbers[] = {1, 2, 3, 4, 5};

    // Calculate the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Initialize a variable to store the sum
    int sum = 0;

    // Calculate the sum of elements in the array
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    // Print the sum
    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}
