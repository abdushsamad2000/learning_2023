#include <stdio.h>

void findMinMax(int array[], int size, int *min, int *max) {
    *min = array[0];  // Assume the first element is the minimum
    *max = array[0];  // Assume the first element is the maximum

    for (int i = 1; i < size; i++) {
        if (array[i] < *min) {
            *min = array[i];  // Update minimum if a smaller value is found
        }

        if (array[i] > *max) {
            *max = array[i];  // Update maximum if a larger value is found
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int min, max;
    findMinMax(array, size, &min, &max);

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
