//Create an array of size 10, input values and display sum and average of all elements in the array.

#include <stdio.h>

int main() {
    int array[10];
    int sum = 0;

    printf("Enter 10 integer values:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    double average = (double)sum / 10.0;

    printf("Array values: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    printf("\nSum of array elements: %d\n", sum);
    printf("Average of array elements: %.2lf\n", average);

    return 0;
}
