#include <task3.h>

unsigned long long sumPrime(unsigned int hbound)
{
	int *zeros = new int[hbound + 1]{};

	for (int i = 2; i*i<=hbound; i++)
		if (zeros[i] == 0)
		{
			for (int j = i * i; j <= hbound; j = j + i)
			{
				zeros[j] = 1;
			}
		}

	long long int sum = 0;

	for (int i = 2; i < hbound; i++)
	{
		if (zeros[i] == 0)
			sum = sum + i;
	}

	return sum;
}
