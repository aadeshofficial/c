//sum of n natural numbers

#include<stdio.h>

int sum(int n);

int main() {
    int n;
    printf("enter the value : ");
    scanf("%d",&n);

    printf("the sum is : %d \n",sum(n));

    return 0;
}

int sum(int n) {
    if(n == 1 ) {
        return 1;
    }
    int sumN1 = sum(n-1);
    int sumN  = sumN1 + n;
}