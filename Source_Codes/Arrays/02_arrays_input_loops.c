#include <stdio.h>

int main(){
    int n;
    printf("Enter the length of your array: ");
    scanf("%d", &n);

    int marks[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the marks of the subject: \n");
        scanf("%d", &marks[i]);
    }
    printf("\n");
    printf("The marks are:~\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", marks[i]);
    }
    
    return 0;
}