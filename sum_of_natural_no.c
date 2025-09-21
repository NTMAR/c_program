#include<stdio.h>
int main(){
    int sum_natural_no=0;
    int user_input;
    printf("Enter positive number:");
    scanf("%d",&user_input);
    for(int num = 1; num<=user_input;num++)
        sum_natural_no+=num;
    printf("%d",sum_natural_no);
    return 0;
}