//Write a funtion that print "Namaste" if user is Hindu and "As-salam alaykum" if user is Muslim.

#include<stdio.h>

void N();
void A();

int main() {
    char ch;
    printf("Enter h for Hindu and m for Muslim : ");
    scanf("%c",&ch);
    
    if(ch == 'h') {
        N();
    } else if(ch =='m') {
        A();
    } else {
        printf("Invalid Letter!!!");
    }
    
    return 0;
}

void N() {
    printf("Namaste:)\n");
}

void A() {
    printf("As-salam alaykum:)\n");
}