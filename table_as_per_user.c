#include<stdio.h>
int main(){
    int tab_st,tab_ed,num_on,num_to;
    printf("Enter from where the table start:");
    scanf("%d",&tab_st);
    printf("Enter where the table end:");
    scanf("%d",&tab_ed);
    for(num_on=1;num_on<=10;num_on++){
        for(num_to=tab_st;num_to<=tab_ed;num_to++){
             printf("%d x %d = %d\t",num_to,num_on,num_on*num_to);
        }
        printf("\n");
    }
}