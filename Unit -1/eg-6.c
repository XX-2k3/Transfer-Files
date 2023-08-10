#include <stdio.h>

int main() {
    int array[10];
    int size = 10;

    printf("Enter %d integer values:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int position, element;

    printf("Enter the position to insert (0 to %d): ", size - 1);
    scanf("%d", &position);

    if (position < 0 || position > size) {
        printf("Invalid position.\n");
        return 1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right to make space for the new element
    for (int i = size - 1; i > position; i--) {
        array[i] = array[i - 1];
    }

    // Insert the new element
    array[position] = element;
    size++;

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
