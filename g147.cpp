//147: Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    
    scanf("%s %d %f", e1.name, &e1.id, &e1.salary);


    fp = fopen("employee.bin", "wb");
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    
    fp = fopen("employee.bin", "rb");
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    
    printf("Name: %s | ID: %d | Salary: %.2f",
           e2.name, e2.id, e2.salary);

    return 0;
}
