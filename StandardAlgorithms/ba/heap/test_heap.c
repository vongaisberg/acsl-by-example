#include <stdio.h>
#include "heap.c"

int main()
{

    int arr[8] = {3, 6, 2, 7, 9, 6, 3, 2};
    sort(arr, 8);

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
}