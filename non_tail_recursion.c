#include <stdio.h>
void nonTailRecursion(int n)
{
    if (n == 0)
        return;
    nonTailRecursion(n - 1); // Recursive call not the last operation
    printf("%d\n ", n);
}
int main()
{
    nonTailRecursion(5);
    return 0;
}