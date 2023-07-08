#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - program that adds numbers positives
 * @c_argc : Number of arg
 * @v_argv : string of arg
 * Return : Success
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
                    printf("Error: Invalid argument\n");
                    return 1;
                }
            }
            sum += atoi(arg);
        }
        printf("Sum: %d\n", sum);
    }
    else
    {
        printf("Sum: 0\n");
    }
    return 0;
}