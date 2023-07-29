#this Repo gather all exercices from basic to advanced 
# Definitions
## Segemetation Fault
is when you try to dereference a pointer that is pointing to invalid memory 
Dereferencing means accessing the value stored at the memory address pointed to by the pointer.
for exapmle :
<pre>
'''
int main(){
    int *ptr ; // Declare a pointer variable

    *ptr = 98; // try to assign value to the memory address ponited by *ptr
    return 0;
}
'''
</pre>

In this code, we declare a pointer variable called ptr, but we haven't initialized it. So, ptr doesn't point to any valid memory location. When we try to assign the value 10 to the memory address pointed by ptr using the line *ptr = 10;, it causes a segmentation fault because we're trying to access memory that we don't own.

To fix this issue, we need to allocate memory for ptr using functions like malloc or calloc:
<pre>
''' 
int main() {
    int *ptr = malloc(sizeof(int));  // Allocate memory for an integer

    *ptr = 10;  // Assign a value to the memory pointed by 'ptr'

    free(ptr);  // Deallocate the memory when done

    return 0;
}
'''
</pre>
##what is  a struct
In C programming, a struct is like a container that can hold different kinds of things. It's like a backpack where you can put your books, toys, and snacks all together. Each item has a name and its own type, and you can carry them around easily!
<pre>
'''
// Declare a struct called "Person"
struct Person {
    char name[50]; // Name of the person (up to 50 characters)
    int age;       // Age of the person (an integer)
    float height;  // Height of the person (a floating-point number)
};
'''
</pre>
 Now that we have our "Person" struct, we can create some variables of this type to hold information about different people.
 <pre>
 '''
 #include <stdio.h>

int main() {
    // Create variables of the "Person" struct
    struct Person person1;
    struct Person person2;

    // Fill in the information for the first person
    strcpy(person1.name, "Alice");
    person1.age = 25;
    person1.height = 1.75;

    // Fill in the information for the second person
    strcpy(person2.name, "Bob");
    person2.age = 30;
    person2.height = 1.80;

    // Display the information for both persons
    printf("Person 1\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    printf("Person 2\n");
    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
    printf("Height: %.2f\n", person2.height);

    return 0;
}
'''
</pre>


