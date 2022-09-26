#include <main.h>
/**
* _memset -fill a memory with constant byte
* @s: Address to memory block
* @b: char to be used 
* @n: number of byte to be used
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
return (s);
