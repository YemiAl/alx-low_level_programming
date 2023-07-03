#include <stdio.h>

/**
 * pre_main - a function that prints before main
 *
 */

void __attribute__((constructor)) pre_main()
{
    printf("This should be printed before the main function\n");
}
