#include <stdio.h>
/**
*main - entry
*@ac: arg count
*@argv: string count
**/
int main(int ac, char **av)
{
int i = 0;
for (; i < ac; i++)
{
printf("%s", av[i]);
printf(" ");
}
return (0);
}
