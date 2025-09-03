#include<stdio.h>
int main(){
    int age;
    printf("Enter the age : ");
    scanf("%d",&age);

    if(age >= 20){
        printf("Adult\n");
    }

    else if(age > 12 && age <20){
        printf("Teenager\n");
    }

    else{
        printf("Child\n");
    }

    printf("Thank you so much\n");
    
    return 0;
}