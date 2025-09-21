#include<stdio.h>
int main(){
    int fac,user_input;
    fac=1;
    printf("Enter number factorial you want:");
    scanf("%d",&user_input);
    for(int num=1;num<=user_input;num++){
        fac = fac*num;
    }
    printf("%d is factorial of %d",fac,user_input);
}