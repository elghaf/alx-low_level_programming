/**
 * _memset - Fills a block of memory with a specified value.
 * @value: The value to be set.
 * @num_bytes: Number of bytes to be filled.
 * @destination: Pointer to the memory block to be filled.
 * Return: Pointer to the filled memory block (@destination).
 */
char *_memset(char *destination, char value, unsigned int num_bytes)
{
unsigned int i;

for (i = 0; i < num_bytes; i++)
{
    destination[i] = value;
}
return (destination);
}
