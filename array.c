#include<stdio.h>
int main() {
    float marks[3];
    printf("Enter Eng marks : ");
    scanf("%f",&marks[0]);

    printf("Enter Maths marks : ");
    scanf("%f",&marks[1]);

    printf("Enter Nep marks : ");
    scanf("%f",&marks[2]);

    printf("Eng = %f,Maths = %f,Nep = %f \n",marks[0],marks[1],marks[2]);

    float Total = marks[0] + marks[1] + marks[2];
    printf("Total marks = %f \n",Total);
    
    float percentage = Total / 3;
    printf("Percentage = %f",percentage);

    return 0;
}