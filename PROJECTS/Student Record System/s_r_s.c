#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure
struct Student {
    int roll;
    char name[50];
    float marks[5];
    float total;
    float percentage;
};

struct Student s[MAX];
int count = 0;

// Function to calculate total and percentage
void calculate(struct Student *st) {
    st->total = 0;
    for (int i = 0; i < 5; i++) {
        st->total += st->marks[i];
    }
    st->percentage = (st->total / 500) * 100;
}

// Add student
void addStudent() {
    if (count >= MAX) {
        printf("\nDatabase full!\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    getchar(); // clear buffer
    fgets(s[count].name, sizeof(s[count].name), stdin);
    s[count].name[strcspn(s[count].name, "\n")] = '\0';

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s[count].marks[i]);
    }

    calculate(&s[count]);
    count++;

    printf("Student added successfully!\n");
}

// Display all students
void displayStudents() {
    if (count == 0) {
        printf("\nNo records found!\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);

        printf("\nMarks: ");
        for (int j = 0; j < 5; j++) {
            printf("%.2f ", s[i].marks[j]);
        }

        printf("\nTotal: %.2f", s[i].total);
        printf("\nPercentage: %.2f%%\n", s[i].percentage);
    }
}

// Search student
void searchStudent() {
    int roll, found = 0;

    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (s[i].roll == roll) {
            printf("\nRecord Found!");
            printf("\nName: %s", s[i].name);

            printf("\nMarks: ");
            for (int j = 0; j < 5; j++) {
                printf("%.2f ", s[i].marks[j]);
            }

            printf("\nTotal: %.2f", s[i].total);
            printf("\nPercentage: %.2f%%\n", s[i].percentage);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nRecord not found!\n");
    }
}

// Delete student
void deleteStudent() {
    int roll, found = 0;

    printf("\nEnter Roll Number to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (s[i].roll == roll) {
            for (int j = i; j < count - 1; j++) {
                s[j] = s[j + 1];
            }
            count--;
            printf("\nRecord deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nRecord not found!\n");
    }
}

// Main function
int main() {
    int choice;

    do {
        printf("\n===== Student Record System =====");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Delete Student");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: printf("\nExiting...\n"); break;
            default: printf("\nInvalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}