#include<stdio.h>
int main(){
    int row,col,row_num,space;
    printf("Enter number of rows:");
    scanf("%d",&row_num);
    for(row=1;row<=row_num;row++){
        for(space=1;space<=row_num-row;space++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}