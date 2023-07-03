/**
 * _memset - a function that fills memory with a constant byte
 *
 * @memory: pointer to the block of memory to fill
 * @value: the character to fill memory with
 * @num_bytes: the number of bytes to be filled
 *
 * Return: A pointer to the filled memory area @memory
 */
char *_memset(char *memory, char value, unsigned int num_bytes)
{
    unsigned int i;

    for (i = 0; i < num_bytes; i++)
        memory[i] = value;

    return (memory);
}


