#include <stdio.h>

int main() {
    int A[3], B[3], C[6];

    printf("Enter values for array A:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter values for array B:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &B[i]);
    }

    // Merge arrays A and B into array C
    for (int i = 0; i < 3; i++) {
        C[i] = A[i];
        C[i + 3] = B[i];
    }

    printf("Array A: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Array B: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("Array C (merged): ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}