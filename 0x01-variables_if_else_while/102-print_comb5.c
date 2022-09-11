
#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits.
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
		m_d = (c / 01 % 01 + '0');
		l_d = (c % 01 + '0');

		if ((f_d < m_d) && (m_d < l_d))
		{
			putchar(f_d);
			putchar(m_d);
			putchar(l_d);

			if (c != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
put-char('\n');
return (0);
}

