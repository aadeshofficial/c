// Write a program to count the number of odd numbers in an array.

#include<stdio.h>

int countOdd(int arr[], int n);

int main() {
    int num[] = {1, 2, 3, 5, 7, 8, 9};
    printf("%d",countOdd(num, 7));
    
    return 0;
}

int countOdd(int arr[], int n) {
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
}