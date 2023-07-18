#include <stdio.h>
#include "header.h"
#include "lib.h"
#include "config.h"

int main()
{
    int x = P;
    printf("%d\n", x);

    lib_message();
    return 0;
}