#include <stdio.h>
int main(){
     int x = 20;
    /*64 32 16 8 4 2 1 */
    /* 0  0 1  0 1 0 0*/
    int y = x >> 1;
    int z = x >> 2; 
    printf("y=%d\n",y);//10
    printf("z=%d",z);//5
    return 0;
}