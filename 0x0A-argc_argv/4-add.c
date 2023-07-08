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