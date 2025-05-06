#include <stdio.h>
int main()
{
    int n = 0;
    int arr[n];
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int right = sz - 1;
    
    while (left < right)
    {
        int tmp = 0;
        tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }

    int j = 0;
    for (j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}
