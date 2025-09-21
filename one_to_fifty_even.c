#include<stdio.h>
int main(){
    int is_even=1;
    while(is_even<=50){
        if(is_even%2==0){
          printf("%d is even\n",is_even);
        }
     is_even++;
    }
    return 0;
}  
