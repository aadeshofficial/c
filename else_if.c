#include<stdio.h>
int main() {
    int marks;
    printf("Enter the student marks (0-100) :: ");
    scanf("%d",&marks);
    
    if(marks > 30 && marks <=100) {
        printf("Student Pass \n");
        
        if(marks > 90 && marks <= 100) { 
            printf("A+ \n");
        }
        else if(marks > 80 && marks <= 90) {
            printf("A \n");
        }
        else if(marks > 70 && marks <=80) {
            printf("B+ \n");
        }
        else if(marks > 60 && marks <= 70) {
            printf("B \n");
        }
        else if(marks > 50 && marks <= 60) {
            printf("C+ \n");
        }
        else if(marks > 40 && marks <= 50) {
            printf("C \n");
        }
        else {
            printf("D+ \n");
        }
            
    }
    
    else if (marks <= 30 && marks >= 0) {
        printf("Student Fail \n");
        if(marks > 20 && marks <=30) {
            printf("D \n");
        }
        else if(marks > 10 && marks <=20) {
            printf("E+ \n");
        }
        else {
            printf("E \n");
        }

    }

    else {
        printf("Invlaid number");
        
    }
    
    return 0;
}