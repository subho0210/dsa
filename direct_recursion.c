#include <stdio.h>
void function(int n)
{
    if (n > 0)
    {
        printf("%d \n", n);
        function(n - 1); // function call it self directly
    }
}
int main()
{
    function(5);
    return 0;
}