#include <stdio.h>

void taking_input(int rows, int columns, int arr[rows][columns]);

void giving_output(int rows, int columns, int arr[rows][columns]);

void display_array(int rows, int columns, int arr[rows][columns]);

int main()
{
    int mat[3][2];

    taking_input(3, 2, mat);

    printf("\n");

    giving_output(3, 2, mat);

    printf("\n");

    display_array(3, 2, mat);

    return 0;
}

void taking_input(int rows, int columns, int arr[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter [%d][%d] element: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void giving_output(int rows, int columns, int arr[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("the value of [%d][%d] element is : %d\n", i, j, arr[i][j]);
        }
    }
}

void display_array(int rows, int columns, int arr[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}