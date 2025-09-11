#include<stdio.h>
int main() {
    int aadhar[5];
    
    int *ptr = &aadhar[0];
    // Input
    for(int i = 0;i < 5;i++) {
        printf("%d index : ",i);
        scanf("%d",&aadhar[i]);
    }
    
    // Output
    for(int i = 0;i < 5;i++) {
        printf("Aadhar %d = %d \n",i,aadhar[i]);
    }
    
    return 0;
}