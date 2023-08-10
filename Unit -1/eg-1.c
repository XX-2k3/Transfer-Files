//Create an array of size 10, input values and print the array, and search an element in the array.


#include <stdio.h>

int main() {
    int array[10];
    int searchElement;

    // Input values into the array
    printf("Enter 10 integer values:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    // Print the array
    printf("The entered array is:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Input value to search for
    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    // Search for the element
    int found = 0; // Flag to indicate if the element is found
    for (int i = 0; i < 10; i++) {
        if (array[i] == searchElement) {
            printf("Element %d found at index %d and position = %d.\n", searchElement, i, i+1);
            found = 1; // Set the flag to indicate the element was found
            break; // Exit the loop once the element is found
        }
    }

    // If the element is not found
    if (!found) {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}
