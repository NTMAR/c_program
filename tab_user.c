#include<stdio.h>
int main(){
    int tab;
    printf("Enter a number the table you want:");
    scanf("%d",&tab);
    for(int num=1;num<=10;num++)
        printf("%dx%d=%d  ",tab,num,tab*num);
    return 0;
}