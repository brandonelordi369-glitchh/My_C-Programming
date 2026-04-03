// In C language, a non-zero value is considered to be true..

#include <stdio.h>

int main() {
    
    // integer
    if(1){
        printf("This if is executed!\n");
    }

    // float
    if(2.74){
        printf("This if is also executed!\n");
    }

    // char
    if('c'){
        printf("This character inside if is also executed!\n");
    }

    // zero
    if(0){
        printf("I am zero - I am not executed\n");
    }
    return 0;
}