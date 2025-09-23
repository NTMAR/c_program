#include <stdio.h>
int main()
{
  int len, num;
  int arr_sum = 0;
  printf("Enter the size of array:");
  scanf("%d", &len);
  int arr[len];
  for (num = 0; num < len; num++)
  {
    printf("Enter %d index number:", num);
    scanf("%d", &arr[num]);
  }
  for (num = 0; num < len; num++)
  {
    arr_sum += arr[num];
  }
  printf("Sum of all elements array:%d", arr_sum);
}