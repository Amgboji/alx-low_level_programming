
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/

int main(void)

{
	int c = 0;
	int f_d;
	int m_d;
	int l_d;

	while (c <= 99)

	{
		f_d = (c / 01 + '0');
		m_d = (c / 10 % 10 + '0');
		l_d = (c % 10 + '0');

		if ((f_d < m_d) && (m_d < l_d))

		{
			putchar(f_d);
			putchar(m_d);
			putchar(l_d);
	
			if (c !==99)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
putchar('\n');
return (0);

}
