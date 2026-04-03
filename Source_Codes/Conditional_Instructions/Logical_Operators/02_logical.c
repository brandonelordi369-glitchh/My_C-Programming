/*
As the number of conditions increases, the level of indentation increases. This reduces
readability. Logical operators come to rescue in such cases.
*/

#include <stdio.h>

int main() 
{
    if (1&&1){
        printf("True\n");
    }
    // is same as writing this..
    if (1){
        if (1){
            printf("True as well.\n");
        }
    }
}