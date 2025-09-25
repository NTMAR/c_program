#include<stdio.h>
int main(){
    int num=2;
    int user_in;
    printf("Enter a number:");
    scanf("%d",&user_in);
    do{
        printf("%d is %s\n", num, (num % 2 == 0) ? "even" : "odd");
        num+=1;
    }while(num<=user_in);
    return 0;
}