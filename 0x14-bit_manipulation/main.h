#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>


int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned long int _power(unsigned int base, unsigned int pow);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);



#endif