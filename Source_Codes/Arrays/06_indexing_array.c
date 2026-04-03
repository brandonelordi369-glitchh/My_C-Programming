// it will give the first occurence..

#include <stdio.h>

int indexng(int arr[], int size, int key);

int main()
{
    int ary[7] = {4, 5, 6, 2, 8, 3, 2};

    int c = indexng(ary, 7, 1);
    printf("%d\n", c);
    return 0;
}

int indexng(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}