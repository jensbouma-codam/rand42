#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief Generate a random number between 0 and 9
 * 
 * @return int 
 */
int	rand42(void)
{
	static clock_t	rnd = 0;
	int				rnd2;
	clock_t			start;
	clock_t			end;
	int				i;

	rnd += 42;
	rnd2 = 42;
	start = clock();
	while (i++ < rnd * 10000000)
		rnd2 *= rnd;
	end = clock();
	rnd = (((int)(end - start * rnd2)));
	while (rnd > 9)
		rnd %= 10;
	return (rnd);
}

/**
 * @brief Main function
 * 
 * @return int 
 */
int	main(void)
{
	int	list[10];

	for (int i = 0; i < 10; i++)
		list[i] = 0;
	for (int i = 0; i < 10000; i++)
		list[rand42()]++;
	for (int i = 0; i < 10; i++)
		printf("list[%d]: %d\n", i, list[i]);
	return (EXIT_SUCCESS);
}
