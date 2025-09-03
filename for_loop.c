//Print the sum of first n natural numbers.
//Also, print them in reverse.

#include<stdio.h>
int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1 , j=n; i<=n && j>=1; i++ , j--) {
        sum = sum + i;
        printf("%d\n",j);
    }

    printf("The total sum is = %d\n",sum);

    return 0;
}