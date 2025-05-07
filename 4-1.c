#include <stdio.h>

int main()
{
    int N = 0, X = 0;
    int arr[N];
    scanf("%d %d", &N, &X);
    int j = 0;
    for (j = 0; j < N; j++)
    {
        scanf("%d", &arr[j]);
    }

    int i = 0;
    int flag = 1;
    for (i = 0; i < N; i++)
    {
        if (X == arr[i])
        {
            printf("%d", i);
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Not Found");
    }

    return 0;
}
