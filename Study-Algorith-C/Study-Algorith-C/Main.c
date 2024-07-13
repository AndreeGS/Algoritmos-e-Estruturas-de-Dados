#include <stdio.h>

int main() {
    int array[10], position, c, n, value;
    float avg = 0.0, max = 0;

    printf("Enter number of elements: ");
    scanf_s("%d", &n);

    printf("Enter %d elements: ", n);
    for (c = 0; c < n; c++) {
        scanf_s("%d", &array[c]);
    }

    printf("Enter the location where you wish to insert an element: ");
    scanf_s("%d", &position);

    printf("Enter the value to insert: ");
    scanf_s("%d", &value);

    for (c = n - 1; c >= position - 1; c--) {
        array[c + 1] = array[c];
    }

    array[position - 1] = value;

    printf("Resultant array is: ");
    for (c = 0; c < n + 1; c++) {
        printf("%d\t", array[c]);
    }

    // Sum calculation
    for (c = 0; c < n + 1; c++) {
        max += array[c];
    }

    if (n != 0) {
        avg = max / n;
        printf("\nThe sum of numbers in the array is: %.2f", max);
        printf("\nThe average of numbers in the array is: %.2f\n", avg);
    }
    else {
        printf("\nArray is empty, cannot calculate sum and average.\n");
    }

    return 0;
}
