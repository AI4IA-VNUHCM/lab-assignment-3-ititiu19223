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
	int posi[n];
	int nega[n];
	int posi_count = 0;
	int nega_count = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= 0)
		{
			posi[posi_count] = arr[i];
			posi_count += 1;
		}
		else
		{
			nega[nega_count] = arr[i];
			nega_count += 1;
		}
	}

	for (int i = 0; i < posi_count; i++)
	{
		if (i == 0)
		{
			printf("%d", posi[i]);
		}
		else
		{
			printf(" %d", posi[i]);
		}
	}
	for (int i = 0; i < nega_count; i++)
	{
		printf(" %d", nega[i]);
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
