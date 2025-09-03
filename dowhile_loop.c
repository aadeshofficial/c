//Keep taking numbers as input from user until user enters an odd number.

#include<stdio.h>
int main() {
    
    int n;
    do{
        printf("Enter the number : ");
        scanf("%d",&n);
        printf("print = %d \n", n);
        if(n % 2 !=0) {
            printf("The end... \n");
            break;
        }
    }while(1);
    
    printf("Thank you!!!");
    
    return 0;
}