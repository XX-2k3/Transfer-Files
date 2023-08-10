#include <stdio.h>

int main() {
    int array[10];
    int size = 10;

    printf("Enter %d integer values:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int position;

    printf("Enter the position to delete (0 to %d): ", size - 1);
    scanf("%d", &position);

    if (position < 0 || position >= size) {
        printf("Invalid position.\n");
        return 1;
    }

    // Shift elements to the left to remove the element at the specified position
    for (int i = position; i < size - 1; i++) {
        array[i] = array[i + 1];
    }

    size--;

    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}