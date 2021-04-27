#include <stdio.h>
#include <stdlib.h>

void Shell_Sort(char* A, int n)
{
	int i, j, h = 1, x;
	do
	{
		h = h * 3 + 1;
	} while (h < n);
	do
	{
		h /= 3;
		for (i = h + 1; i <= n; i++)
		{
			x = A[i];
			j = i;
			while (A[j - h] > x)
			{
				A[j] = A[j - h];
				j -= h;
				if (j <= h)
					break;
			}
			A[j] = x;
		}
	} while (h != 1);
}

int main()
{
	char A[13];
	A[1] = 'F';
	A[2] = 'E';
	A[3] = 'R';
	A[4] = 'N';
	A[5] = 'A';
	A[6] = 'N';
	A[7] = 'D';
	A[8] = 'A';
	A[9] = 'M';
	A[10] = 'E';
	A[11] = 'L';
	A[12] = 'O';
	Shell_Sort(A, 12);

}
