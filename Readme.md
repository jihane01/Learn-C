#this Repo gather all exercices from basic to advanced 
# Definitions
## Segemetation Fault
is when you try to dereference a pointer that is pointing to invalid memory 
Dereferencing means accessing the value stored at the memory address pointed to by the pointer.
for exapmle 
'''
int main(){
    int *ptr ; // Declare a pointer variable

    *ptr = 98; // try to assign value to the memory address ponited by *ptr
    return 0;
}
'''


