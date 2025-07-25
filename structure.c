#include <stdio.h>
// Define a structure
struct Person {
    char name[50];
    int age;
    float salary;
};
int main() {
    // Declare a structure variable
 struct Person person1;
  // Assign values to the structure members
    strcpy(person1.name, "John");
 person1.age = 30;
 person1.salary = 50000.50;
  // Access and print structure members
 
 printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Salary: %.2f\n", person1.salary);

return 0;
}
