// Create arrays A, B and C of size 3, perform C = A + B.

#include <stdio.h>

int main()
{
    int A[3], B[3], C[3];

    printf("Enter values for array A:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter values for array B:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        C[i] = A[i] + B[i];
    }

    printf("Array A: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Array B: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("Array C = A + B : ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
