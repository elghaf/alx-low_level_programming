#include <unistd.h>
#include <string.h>

int rand()
{
	static int conteru = -1;
	
	conteru++;
	if (conteru == 0)
		return 8;
	if (conteru == 1)
		return 8;
	if (conteru == 2)
		return 7;
	if (conteru == 3)
		return 9;
	if (conteru == 4)
		return 23;
	if (conteru == 5)
		return 74;
	return conteru * conteru % 30000;
}
