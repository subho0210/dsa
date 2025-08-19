#include <stdio.h>
void tailRecursion(int n)
{
    if (n == 0)
        return;
    printf("%d \n", n);
    tailRecursion(n - 1); // Recursive call is the last operation
}
int main()
{
    tailRecursion(5);
    return 0;
}
