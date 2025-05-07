#include <stdio.h>
//插入排序，从小到大排
void InsertSort(int arr[], int n)
{
    int i = 0;
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void Checkout_single(int arr[], int n)
{
    int i = 0;
    int j = 0;

    if (arr[0] != arr[1])
    {
        printf("%d ", arr[0]);
    }

    if (arr[n - 2] != arr[n - 1])
    {
        printf("%d ", arr[n - 1]);
    }

    for (i = 1; i < n - 1; i++)
    {
        if (arr[i - 1] != arr[i] && arr[i] != arr[i + 1])
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int arr[n];
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    InsertSort(arr, n);

    //for (i = 0; i < n; i++)
    //{
    //    printf("%d ", arr[i]);
    //}
    Checkout_single(arr, n);


    return 0;
}