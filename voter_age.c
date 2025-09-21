#include<stdio.h>
#include <stdlib.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18)
       printf("You are eligible for give vote");
    else 
       printf("Not eligible");
    system("pause");
    return 0;
}