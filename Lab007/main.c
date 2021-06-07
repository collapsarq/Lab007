//Написать генератор псевдослучайных чисел по алгоритму r = r * 1234 + 65432 mod 100000. Подсчитать частоты попадания в каждый из интервалов длиной 10000 при выборке 500000.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include "randomize.h"
#define SELECT 500000

int main()
{
	int count[10] = { 0 };
	bool toggle = true;
	char input;
choice:
	printf("Do you want to see all random generated numbers?\nType Y(YES) or N(NO): ");
	scanf("%c", &input);
	if (input == 'Y')
		toggle = true;
	else if (input == 'N')
		toggle = false;
	else
	{
		system("cls");
		goto choice;
	}

	selection(count, SELECT, toggle);
	return 0;
}
