#include <stdio.h>
/**
 * main - A program that prints the size of various typs on the comuter it is complied and run on 
 * Return 0 (Succes)
 */
int main(void)
{
char a;
int b;
long intc3;
long long int d;
float f;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
