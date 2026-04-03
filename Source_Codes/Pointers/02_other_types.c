/*
Different pointer types:~
    int    *ip;
    char   *cp;
    float  *fp;
    void   *vp;
*/

#include <stdio.h>

int main(){
    char a = 'C';
    char *k = &a;

    printf("The address of 'a' is %p\n", (void *)k);
    printf("The address of pointer 'k' is %p\n", (void *)&k);

    printf("\n");

    float b = 5.369;
    float *fb = &b;

    printf("The address of 'b' is %p\n", (void *)fb);
    printf("The address of pointer 'fb' is %p\n", (void *)&fb);

    return 0;
}