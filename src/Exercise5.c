/*
5. Write a function to move all positive element of an array upfront
Ex:
______________________________________
| Input: 2 -3 4 6 -7 9 8 -2          |
| Output: 2 4 6 9 8 -3 -7 -2         |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex5(int arr[], int n)
{
	//Your codes here
	int positive[n];
	int negative[n];
	int p_count = 0;
	int n_count = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= 0)
		{
			positive[p_count] = arr[i];
			p_count += 1;
		}
		else
		{
			negative[n_count] = arr[i];
			n_count += 1;
		}
	}

	for (int i = 0; i < p_count; i++)
	{
		if (i == 0)
		{
			printf("%d", positive[i]);
		}
		else
		{
			printf(" %d", positive[i]);
		}
	}
	for (int i = 0; i < n_count; i++)
	{
		printf(" %d", negative[i]);
	}
}

int main(int argc, char *argv[])
{
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc], i;
	for (i = 0; i < argc; i++)
	{
		testcase[i] = atoi(argv[i + 1]);
	}

	Ex5(testcase, argc);

	return 0;
}
