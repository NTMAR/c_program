#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int index=0;
    int length = sizeof(arr) / sizeof(arr[0]);
     printf("Original array:\n");
    for (int num = 0; num < length; num++) {
        printf("%d ", arr[num]);
    }
    int arr_two[length];
    for(int num=length-1;num>=0;num--){
        arr_two[index] = arr[num];
        index++;
    }
    printf("\nAfter reverse:\n");
     for(int num=0;num<length;num++){
        printf("%d ",arr_two[num]);
    }
}