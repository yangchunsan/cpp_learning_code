#include <stdio.h>
void CharPyramid( int n, char ch)
{
    for (int i = 0; i < n; i++)//控制行
    {
        for (int j = n - i; j > 0; j--)//控制每行的空格数
        {
            printf(" ");
        }
        
        for (int b = n - i - 1; b < n; b++)
        {
			printf("%c ", ch);
		}
        printf("\n");
    }
}


int main()
{    
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);
    
    return 0;
}

