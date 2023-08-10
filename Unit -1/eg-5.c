#include <stdio.h>

int main() {
    int array[10];

    printf("Enter 10 integer values:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    int largest = array[0]; // Assume the first element is the largest

    for (int i = 1; i < 10; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    printf("The largest value in the array is: %d\n", largest);

    return 0;
}
