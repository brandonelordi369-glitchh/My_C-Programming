#include <stdio.h>
#include <string.h>

struct employee {
    int id;
    char name[20];
    float basic_Pay;
};

int main()
{
    struct employee e1;
    e1.id = 4511;
    strcpy(e1.name, "Iamdad");
    e1.basic_Pay = 100000;

    printf("%d %s %.2f \n", e1.id, e1.name, e1.basic_Pay);
    
    return 0;
}