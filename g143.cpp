//Q143: Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n = 3;   
    struct Student s[n];
    int i;

    
    for (i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    
    int topperIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("Topper: %s (Marks: %d)",
           s[topperIndex].name,
           s[topperIndex].marks);

    return 0;
}
