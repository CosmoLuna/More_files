#include "functions.h"
#include <stdlib.h>
#include <time.h>


// returns a + b
int sum(int a, int b) {
	return a + b;
}

void fillArr(int arr[], int length, int a, int b)
{
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (b - a) + a;
}

