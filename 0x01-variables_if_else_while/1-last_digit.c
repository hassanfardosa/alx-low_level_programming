#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *main -entry point
 *description: get last digit of a number
 *return : always 0
**/
int main(void)
{
	int n;
	int x;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x=n%10;
	if (x >5)
	{
	
	printf("last digit of %d is %d and is greater than 5\n", n, x);
	
	}
	


	else if (x ==0)
        {

        printf("last digit of %d is %d and zero\n", n, x);
        
        }
	else
        {

        printf("last digit of %d is %d and is less than 6 and 0\n", n, x);
        
        }
	return (0);
}

