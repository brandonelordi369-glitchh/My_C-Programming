/*
In simpler terms we can say:
    do-while loop = while loop which executes at least once,
    irrespective of what the condition given is..
*/


#include <stdio.h>

int main()
{
    int i = 2;

    do
    {
        printf("%d\n", i); i++;
        
    } while (0);  // 1 -> true, 0 -> false..
    
    return 0;
}


// // Same code with 'while loop' will not run at any cost!

// int main() 
// {
//     int i = 2;

//     while (0)  // 1 -> true, 0 -> false..
//     {
//         printf("%d\n", i); i++;
//     }
    
//     return 0;
// }
