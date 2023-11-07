#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
*main - entry poin
*Return: 0
*
*
**/
int main(void)
{
char *Input = NULL;
size_t InputSizeInBytes = 0;
ssize_t BytesRead;
while (1)
{
printf("$ ");
BytesRead = getline(&Input, &InputSizeInBytes, stdin);
if (BytesRead < 0)
{
break;
}
printf("%s" ,Input);
}
free(Input);
return (0);
}
