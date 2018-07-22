#include <stdio.h>
#include <stdlib.h>

unsigned int fibonacci (unsigned int n)
{
    if( n == 0 ) return 0;
    if( n <= 2 ) return 1;
    return (fibonacci(n-1)) + (fibonacci(n-2)); //f(n) = f(n-1) + f(n-2)
}

int main()
{
    int x = 4;
    printf("%d", fibonacci (x));
    return 0;
}
