#include<stdio.h>
int main(){
    int row,col,row_num;
    printf("Enter a number of rows:");
    scanf("%d",&row_num);
    for(row=1;row<=row_num;row++){
        for(col=1;col<=row;col++){
            printf("*");
        }
        printf("\n");
    }
}