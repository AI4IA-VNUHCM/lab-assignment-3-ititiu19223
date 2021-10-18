/*
3.	Input an array of n integers. Find the largest sorted sub array
(sorted array increasing/decreasing and has the largest number of elements)
Ex:
 _____________________________________________
| Input: 2 5 3 4 8 9 7 6 10                   |
| Output: Increasing 3 4 8 9 Decreasing 9 7 6 |
|_____________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex3(int in_arr[], int n)
{
	//Your codes here
	int max_in = 1, count_in = 1, in_idx = 0;
	int max_de = 1, count_de = 1, de_idx = 0;
	for (int i = 1; i < n; i++)
	{
		if (in_arr[i] > in_arr[i - 1])
		{
			count_in++;
		}
		else
		{
			if (max_in < count_in)
			{
				max_in = count_in;
				in_idx = i - max_in;
			}
			count_in = 1;
		}
	}
	if (max_in < count_in)
	{
		max_in = count_in;
		in_idx = n - max_in;
	}
	for (int j = 1; j < n; j++)
	{
		if (in_arr[j] < in_arr[j - 1])
		{
			count_de++;
		}
		else
		{
			if (max_de < count_de)
			{
				max_de = count_de;
				de_idx = j - max_de;
			}
			count_de = 1;
		}
	}
	if (max_de < count_de)
	{
		max_de = count_de;
		de_idx = n - max_de;
	}
	printf("Increasing ");
	for (int i = in_idx; i < in_idx + max_in; i++)
	{
		printf("%d ", in_arr[i]);
	}
	printf("Decreasing ");
	for (int j = de_idx; j < de_idx + max_de; j++)
	{
		printf("%d ", in_arr[j]);
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

	Ex3(testcase, argc);

	return 0;
}
