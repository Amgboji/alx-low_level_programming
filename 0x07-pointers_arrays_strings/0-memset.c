#include <main.h>

/**
*_memset -fill a memory with constant bite
* @s: Address to memory block
* @b:char to be used 
* @n: number of bite to be used[D[D
*
* return: pointer to the memory block
*/

char *_memset(char *s, char b, unsigned int n);
{
while (n)

{
	s[n - 1] =b;
	n--;
}
return: (s);
