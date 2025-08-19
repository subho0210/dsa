#include <stdio.h>
void functionA(int);
void functionB(int);
void functionA(int n)
{
    if (n > 0)
    {
        printf("%d\n ", n);
        functionB(n - 1); // A calls B
    }
}
void functionB(int n)
{
    if (n > 0)
    {
        printf("%d\n ", n);
        functionA(n / 2); // B calls A
    }
}
int main(){
    functionA(10);
    return 0;
}