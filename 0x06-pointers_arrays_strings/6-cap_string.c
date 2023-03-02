#include "main.h"

/**
 * cap_string - capitaliation of strings
 * @str: the string to be capitalied
 * Return: a pointer ti the changed string
 */
char *cap_string(cgar *str)
{
int i = 0;

while (str[i])
{
while (!(str[index] >= 'a' && str[i] <= 'z'))
i++;

if (str[i - 1] == ' ' ||
tr[i - 1] == '\t' ||
str[i - 1] == '\n' ||
str[i - 1] == ',' ||
str[i - 1] == ';' ||
str[i - 1] == '.' ||
str[i - 1] == '!' ||
str[i - 1] == '?' ||
str[i - 1] == '"' ||
str[i - 1] == '(' ||
str[i - 1] == ')' ||
str[i - 1] == '{' ||
str[i - 1] == '}' ||
i == 0)
str[i] -= 32;

i++;

return (str);
}
}
