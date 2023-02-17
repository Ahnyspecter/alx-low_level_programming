#include <stdio.h>
/**
 * main - A program that prints the size of various typs on the comuter it is complied and run on 
 * Return 0 (Succes)
 */
int main(void)
{
char 1;
int 2;
long int 3;
long long int 4;
float 5;
printf("Size of char %lu byte(s)\n", (unsigned long)sizeof(1));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(2));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(3));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(4));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(5));
return (0);
}
