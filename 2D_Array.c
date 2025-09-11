#include<stdio.h>

int main() {
    // 2 * 3
    int marks[2][3];
    
    marks[0][0] = 98;
    marks[0][1] = 65;
    marks[0][2] = 69;
    
    marks[1][0] = 86;
    marks[1][1] = 75;
    marks[1][2] = 83;
    
    printf("%d \n",marks[0][2]);
    
    return 0;
}