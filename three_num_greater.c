#include <stdio.h>
int main() {
    int first_num, second_num, third_num;

    printf("Enter first number: ");
    scanf("%d", &first_num);
    printf("Enter second number: ");
    scanf("%d", &second_num);
    printf("Enter third number: ");
    scanf("%d", &third_num);

    if (first_num > second_num) {
        if (first_num > third_num)
            printf("%d is greater\n", first_num);
        else
            printf("%d is greater\n", third_num);
    } 
    else {
        if (second_num > third_num)
            printf("%d is greater\n", second_num);
        else
            printf("%d is greater\n", third_num);
    }

    return 0;
}
