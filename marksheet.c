#include<stdio.h>
int main() {
    float a,b,c,d,e,f,s;
    
    printf("Enter the marks of English : ");
    scanf("%f",&a);
    
    printf("Enter the marks of Nepali : ");
    scanf("%f",&b);
    
    printf("Enter the marks of Maths : ");
    scanf("%f",&c);
    
    printf("Enter the marks of Science : ");
    scanf("%f",&d);
    
    printf("Enter the marks of Social : ");
    scanf("%f",&e);
    
    f = a + b + c + d + e;
    printf("Total marks = %f\n",f);
    
    s = f / 500 * 100;
    printf("Percentage = %f\n",s);
    
    if(s >=40 && s <=100) {
        printf("Student is Pass \n");
        
        if(s > 90 && s <= 100) { 
            printf("Grade is A+ \n");
        }
        else if(s > 80 && s <= 90) {
            printf("Grade is A \n");
        }
        else if(s > 70 && s <=80) {
            printf("Grade is B+ \n");
        }
        else if(s > 60 && s <= 70) {
            printf("Grade is B \n");
        }
        else if(s > 50 && s <= 60) {
            printf("Grade is C+ \n");
        }
        else {
            printf("Grade is C \n");
        }
        
            
    }
    
    else if (s < 40 && s >= 0) {
        printf("Student is Fail \n");
        if(s > 30 && s <=40) {
            printf("Grade is D+ \n");
        }
        else if(s > 20 && s <=30) {
            printf("Grade is D \n");
        }
        else if(s > 10 && s<=20){
            printf("Grade is E+ \n");
        }
        else {
            printf("Grade is E \n");
        }

    } else {
        printf("Invalid Marks:(");
    }
   
    return 0;
}