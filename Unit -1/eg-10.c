#include <stdio.h>

int main()
{
    int i,j;
    int a[3][3],b[3][3],c[3][3];

    printf("enter the value of 'A' => \n");

    for (i=0 ; i<3 ; i++)
    {
        for (j=0 ; j<3 ; j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }

    printf("enter the value of 'B' => \n");
    for (i=0 ; i<3 ; i++)
    {
        for (j=0 ; j<3 ; j++)
        {
            scanf("%d" , &b[i][j]);
        }
    }

   for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("enter the value of 'C' => \n");

    for (i=0 ; i<3 ; i++)
    {
        printf("\n");

        for (j=0 ; j<3 ; j++)
        {
            printf(" %d " , c[i][j]);
        }
    }
    return 0;
}