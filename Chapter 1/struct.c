#include <stdio.h>
#include <string.h>

struct studentT{
    char name[64];
    int age;
    float gpa;
    int grad_yr;
};

int main(void){
    struct studentT student1, student2;

    strcpy(student1.name, "Wayne Karlo");
    student1.age = 19 + 2;
    student1.gpa = 3.5;
    student1.grad_yr = 2027;

    printf("Name: %s Age: %d GPA: %g Graduation: %d\n", student1.name, student1.age, student1.gpa, student1.grad_yr);
    
    student2 = student1;

    strcpy(student2.name, "San Diego");
    student2.grad_yr = student1.grad_yr + 1;

    printf("Name: %s Age: %d GPA %g Graudation: %d\n", student2.name, student2.age, student2.gpa, student2.grad_yr);
    printf("Number of bytes in student struct: %lu\n", sizeof(struct studentT));

    return 0;
}