#include <stdio.h>
/**
 * main - prints the program's name and new line
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
    return 0;
}
