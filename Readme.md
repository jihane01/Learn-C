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

