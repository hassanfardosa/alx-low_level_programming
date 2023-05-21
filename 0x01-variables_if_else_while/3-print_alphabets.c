#include <stdio.h>

/**
 * main function
 * description :printing alphabets in both lower and uppercase 
 * return :always 0
 */
int main(void)
{



int x=97;
int y=65;

while(x<=122)
{
putchar(x);
x++;


}

while(y<=90)
{
putchar(y);
y++;


}
putchar('\n');
return 0;
}
