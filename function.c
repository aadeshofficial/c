//Write two function - one to print hello and another to print goodbye.

#include<stdio.h>


void Hello(); //Declaration or prototype
void Goodbye(); //Declaration or prototype

int main() {
    Hello(); //Function call
    Goodbye(); //Function call

    return 0;
}

void Hello() //Function definition
{
    printf("Hello!!!\n");
}

void Goodbye() //Function definition
{
    printf("Goodbye:)\n");
}