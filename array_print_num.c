#include<stdio.h>
int main(){
    int arr[10];
    int num;
    printf("Enter 10 number");
    for(num=0;num<10;num++){
        scanf("%d",&arr[num]);
    }
    for(num=0;num<10;num++){
        printf("%d your enter number\n",arr[num]);
    }
    return 0;
}