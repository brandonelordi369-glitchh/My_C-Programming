// #include <stdio.h>

// int main()
// {
//     for (int i = 0; i <10; i++)
//     {
//         if (i == 5)
//         {
//             printf("\n");
//             continue;  // skip this iteration..
//         }
//         printf("%d\n", i);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int skip = 5;
    int i = 0;
    while (i < 10)
    {
        if (i == skip || i == 7 || i == 9)
        {
            i++;
            // printf("\n");
            continue; // skips the rest of the loop body for i == 5
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}