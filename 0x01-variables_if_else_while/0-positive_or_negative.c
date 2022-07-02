#include <stdlib.h>
#include <time.h>
/* more header goes there */

/* betty style doc for function main goes here */
int main(void)
{
	printf("random 1: %d\n", rand() );
	int n;

	srand(time(0));
	n =rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
