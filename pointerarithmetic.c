#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {10, 20, 30, 40, 50};
    int *ptr = &arr[0]; // ptr points to arr[0]

    printf("Accessing array elements using pointer \n");
    while(ptr < &arr[SIZE])
    {
        printf("%d \n", *ptr);

        // Move to next array element
        ptr++; 
    }

    return 0;
}
