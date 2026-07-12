// Repeat previous problem for a general input provided by the user using scanf.

#include <stdio.h>

int main()
{
    int arr[10];
    int tkinp;
    printf("Enter a number: \n");
    scanf("%d", &tkinp);

    for (int i = 0; i < 10; i++)
    {
        arr[i] = tkinp * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}