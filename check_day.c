#include<stdio.h>
int main(){
    int num;
    /*
    0 -> sunday
    1 -> monday
    2 -> tuesday
    3 -> wednesday
    4 -> thrusday
    5 -> friday
    6 -> saturday
    */
     printf("Enter number:");
     scanf("%d",&num);
     switch(num){
        case 0:printf("Sunday");
        break;
        case 1:printf("Monday");
        break;
        case 2:printf("Tuesday");
        break;
        case 3:printf("Wednesday");
        break;
        case 4:printf("Thrusday");
        break;
        case 5:printf("Friday");
        break;
        case 6:printf("Saturday");
        break;
        default:printf("Please enter from 0 to 6");
     }
     return 0;
}