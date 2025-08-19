#include <stdio.h>
// recursive number to return nth fibonacci number
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n, i;
    printf("Enter the number of term  :");
    scanf("%d", &n);
    printf("fibonacci series :");
    for (i = 0; i < n; i++)
    {
        printf("%d", fibonacci(i));
    }
    return 0;
}