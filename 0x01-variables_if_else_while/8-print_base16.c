#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int x =48;
	int y =97;
	while (x <=  57)
        {
                putchar(x);
                x++;
 	}
	while (x <= 102)
        {
                putchar(y);
		y++;
        }
        putchar('\n');
        return (0);
}
