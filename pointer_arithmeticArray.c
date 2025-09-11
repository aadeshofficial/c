#include<stdio.h>
int main() {

    // int age = 18;
    // int *ptr = &age;
    // printf("ptr = %u \n",ptr);
    // ptr++;
    // printf("ptr = %u \n",ptr);
    // ptr--;
    // printf("ptr = %u \n",ptr);

    // float price = 199.99;
    // float *ptr = &price;
    // printf("ptr = %u \n",ptr);
    // ptr++;
    // printf("ptr = %u \n",ptr);
    // ptr--;
    // printf("ptr = %u \n",ptr);

    char star = '*';
    char *ptr = &star;
    printf("ptr = %u \n",ptr);
    ptr++;
    printf("ptr = %u \n",ptr);
    ptr--;
    printf("ptr = %u \n",ptr);

    return 0;
}