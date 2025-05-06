#include <stdio.h>

int CountDigit( int number, int digit );
    
int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    
    return 0;
}

int CountDigit( int number, int digit )
{
    int num = 0;
    while (number / 10 != 0)
   {
       int n = number % 10;

       if (n == digit)
       {
           num++;
       }

        number /= 10;
   }

    return num;
}
