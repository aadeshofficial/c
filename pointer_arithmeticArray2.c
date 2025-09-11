// We can also subtract one pointer from another.
// We can also compare 2 pointers.

#include<stdio.h>
int main() {
    int age = 18;
    int _age = 19;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u \n%u \nDifference = %u\n",ptr,_ptr,ptr - _ptr);

    _ptr = &age;
    printf("Comparison = %u",ptr == _ptr);
}