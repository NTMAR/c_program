#include<stdio.h>
int main(){
    int is_num;
    printf("Enter a number:");
    scanf("%d",&is_num);
    if(is_num%2==0)
       printf("is even number",is_num);
    else
       printf("is odd number",is_num);
    return 0;
}