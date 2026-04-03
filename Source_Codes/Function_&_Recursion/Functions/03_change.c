#include <stdio.h>

int change(int a);

int change(int a)
{
    a = 89;
    return a;
}

int main()
{
    int b = 23;
    change(b);
    printf("The value of 'b' is still %d \n", b);
    return 0;
}

/*
"change()" ke paas 'b' ki value ja rhi hae, 
wo bhi uski Copy!!  Na 'b' ja rhi hae & 
Na hi uski Real value jo uske andar hae!
*/
