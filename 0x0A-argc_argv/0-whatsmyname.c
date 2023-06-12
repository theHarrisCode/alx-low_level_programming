#include <stdio.h>
/**
 * main - prints the program's name and new line
 * @argc: amount of arguments in command line
 * @argv: command line elements
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
    int i;

    i = 0;
    while (i < argc)
    {
        printf("%s\n", argv[i]);
        i++;
    }
    return (0);
}
