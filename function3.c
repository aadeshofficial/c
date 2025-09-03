//Calculate value including Tax
#include<stdio.h>
void calculateTax(float vlaue); 

int main() {
    float vlaue;
    printf("Enter the value : ");
    scanf("%f",&vlaue);
    
    calculateTax(vlaue); //argument or actual parameter
    return 0;
}

void calculateTax(float vlaue) { //parameter or formal parameter
    printf("Total amount including tax = %f\n", vlaue + (0.18 * vlaue));
}