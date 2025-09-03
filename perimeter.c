#include<stdio.h>
int main(){
    float l,w;
    printf("The value of length is : ");
    scanf("%f",&l);
    printf("The value of width is : ");
    scanf("%f",&w);
    printf("The perimeter of length is :: %f", 2*(l + w ));
    return 0;
}