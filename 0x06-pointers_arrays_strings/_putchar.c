#include <unistd.h>

/**

* _putchar - write the character c to stand out
* I: the character to print
*
Return: on success 1.
* on error, -1 is returned, and errno is set appropraitely 
*/

int _putchar(char c)
{

	return (write(1, &c, 1));

}
