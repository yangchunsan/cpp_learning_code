#include <stdio.h>
int main()
{
    int a, b, c, d, Sum;
    float Average;

    scanf_s("%d %d %d %d", &a, &b, &c, &d);

    Sum = a + b + c + d;
    Average = (float)(a + b + c + d) / 4;
    printf("Sum = %d; Average = %.1f", Sum, Average);

    return 0;
}