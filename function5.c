#include<stdio.h>

void Table(int n);

int main() {
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    Table(n);

    return 0;
}

void Table(int n) {
    for(int i=1; i<=10; i++){
        printf("%d \n",i*n);
    }
}