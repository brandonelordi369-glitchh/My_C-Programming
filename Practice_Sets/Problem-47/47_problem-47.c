// Write a program to store the details of 3 employees from user defined data.

#include <stdio.h>

struct employee {
  int id;
  char name[20];
  float salary;
};

int main() {
  struct employee emp[3];

  for (int i = 0; i < 3; i++) {
    printf("Enter emp id: ");
    scanf("%d", &emp[i].id);

    printf("Enter emp name: ");
    scanf("%s", emp[i].name);

    printf("Enter emp salary: ");
    scanf("%f", &emp[i].salary);
  }

  for (int i = 0; i < 3; i++) {
    printf("%d %s %.2f \n", emp[i].id, emp[i].name, emp[i].salary);
  }

  return 0;
}
