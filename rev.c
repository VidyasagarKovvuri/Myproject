#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, j, temp;
    printf("Enter the number : ");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    printf("Enter the elements into the array : ");
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    for(i = 0, j = num-1; i < (num/2); i++, j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    printf("the array after reversing the array : ");
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
