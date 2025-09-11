#include<stdio.h>
int main() {
    float marks[] = {94.0,96.5,93.0};

    printf("Eng = %f \nMaths = %f \nNep = %f \n",marks[0],marks[1],marks[2]);

    float Total = marks[0] + marks[1] + marks[2];
    printf("Total marks = %f \n",Total);
    
    float percentage = Total / 3;
    printf("Percentage = %f",percentage);

    return 0;
}