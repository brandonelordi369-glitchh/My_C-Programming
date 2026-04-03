#include <stdio.h>

void addMatrix(int mat[2][2], int mat2nd[2][2]);

void addMatrix(int mat[2][2], int mat2nd[2][2])
{
    int result[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = mat[i][j] + mat2nd[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
}

int main()
{
    int twod[2][2] = {{8, 4}, {6, 5}};

    // printf("%d\n", twod[0][0]);

    int arr[2][2] = {
        {2, 3},
        {6, 4}};

    // printf("%d\n", arr[0][0]);

    addMatrix(twod, arr);

    return 0;
}