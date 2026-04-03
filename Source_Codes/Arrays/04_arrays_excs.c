#include <stdio.h>

int main()
{
    int sn[] = {3, 5, 9, 2, 1};

    for(int i = 0; i < 5; i++){
        printf("%d\n", sn[i]);
    }

    printf("\nAfter changing some values:~\n");

    sn[0] = 90;          
    sn[2] = 95;  

    for(int i = 0; i < 5; i++){
        printf("%d\n", sn[i]);
    }

    return 0;
}