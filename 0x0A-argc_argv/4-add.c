#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: Prints the sum of positive numbers from the command line arguments.
 * If any argument is not a positive number, it prints an error message.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int i;
    unsigned int j, sum = 0;
    char *arg;

    if (argc > 1)
    {
        for (i = 1; i < argc; i++)
        {
            arg = argv[i];
            for (j = 0; j < strlen(arg); j++)
            {
                if (!isdigit(arg[j]))
                {
                    printf("Error\n");
                    return 1;
                }
            }
            sum += atoi(arg);
        }
        printf("%d\n", sum);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}