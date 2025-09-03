#include<stdio.h>
int main(){
    int day;//1-sun,2-mon....7-sat
    printf("Enter number (1-7) for days :: ");
    scanf("%d", &day );

    switch (day){
        case 1 : printf("Sunday \n");
        break;
        case 2 : printf("Monday \n");
        break;
        case 3 : printf("Tueday \n");
        break;
        case 4 : printf("Wedday \n");
        break;
        case 5 : printf("Thusday \n");
        break;
        case 6 : printf("Friday \n");
        break;
        case 7 : printf("Saturday \n");
        break;
        default : printf("Invalid Day \n");
    }

    return 0;

}