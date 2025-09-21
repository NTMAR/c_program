#include <stdio.h>
int main(){
    int x = 5;
    /*64 32 16 8 4 2 1 */
    /*           1 0 1*/
    int y = x << 1;
    int z = x << 2; 
    printf("y=%d\n",y);//10
    printf("z=%d",z);//20
    return 0;
}
