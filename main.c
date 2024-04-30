// C program to implement shell sort algorithm

#include <stdio.h>
#include <stdlib.h>

#define MAX 7

int shellSort(int arr[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    int mid = 0;

    k = MAX / 2;
    while (k > 0) {
        j = k;
        while (j < MAX) {
            i = j - k;
            while (i >= 0) {
                if (arr[i + k] >= arr[i])
                    break;
                else {
                    mid = arr[i];
                    arr[i] = arr[i + k];
                    arr[i + k] = mid;
                }
                i = i - k;
            }
            j++;
        }
        k = k / 2;
    }
    return 0;
}

int main()
{
    int i = 0;
    int arr[MAX];

    printf("Enter array elements:\n");
    while (i < MAX) {
        printf("Element[%d]: ", i);
        scanf("%d", &arr[i]);
        i++;
    }

    shellSort(arr);

    printf("Sorted Array: \n");
    i = 0;
    while (i < MAX) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    return 0;
}
