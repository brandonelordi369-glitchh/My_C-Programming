// Repeat previous problem for a custom input given by the user.

#include <stdio.h>

int main()
{
    int arr[3];
    int tables[3][10];

    printf("Enter the array elements;\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    // structuring tables..
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tables[i][j] = arr[i] * (j + 1);
        }
    }

    // printing tables..
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tables[i][j]);
        }
        printf("\n");
    }

    return 0;
}