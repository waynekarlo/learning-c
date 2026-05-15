#include <stdio.h>
#include <string.h>

struct personT {
    char name[10];
    int age;
    float height;
};

int main(void) {
    struct personT person;
    strcpy(person.name, "Wayne");
    person.age = 21;
    person.height = 5.8;
    
    printf("Name: %s\n Age: %d\n Height:%g\n ", person.name,person.age,person.height);

  return 0;
}
