#ifndef RANDOMIZE
#define RANDOMIZE
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "randomize.h"

unsigned int randomize()
{
	return (rand() * 1234 + 65432) % 100000;
}

void selection(int* count, int select, bool toggle)
{
	for (int i = 0; i < select; i++)
	{
		int number = randomize();
		if (toggle == true)
			printf("%d : %d\n", i + 1, number);
		count[number / 10000]++;
	}

	for (int k = 0; k < 10; k++)
	{
		printf("Count of numbers from %d0000 to %d0000: %d\n", k, k + 1, count[k]);
	}
}
#endif