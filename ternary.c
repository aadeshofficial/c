#include<stdio.h>
int main() {
    int age;
    printf("Enter the age :: ");
    scanf("%d",&age);

    age >= 20 ? printf("Adult") : printf("Not an Adult");
    
    return 0;
}