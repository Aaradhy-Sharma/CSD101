#include <stdio.h>
#include <stdlib.h>
#define null 0


void recursion()
{
    recursion();
}
signed main(void)
{
    recursion();
    return null;
}