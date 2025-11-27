//Q142: Store details of 5 students in an array of structures and print all.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[5];
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("Enter Name, Roll, Marks for student %d:\n", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    
    printf("\nName\tRoll\tMarks\n");
    for (i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
