#include<stdio.h>
int main(){
    int num,user_in,loop;
    int sum=0;
    printf("How many numbers do you want to add together? ");
    scanf("%d",&user_in);
    for(loop=1;loop<=user_in;loop++){
        printf("Enter number %d:",loop);
        scanf("%d",&num);
        sum+=num;
    }
    printf("sum is %d",sum);
    return 0;
}