#include<stdio.h>
int main() {
    int age=22;
    int *ptr=&age;
    
    // To find age
    printf("%d \n",age);
    printf("%d \n",*ptr);
    printf("%d \n",*(&age));
    
    // To find the address of age and ptr
    printf("%u \n",&age);
    printf("%u \n",ptr);
    printf("%u \n",&ptr);
    
    return 0;
}