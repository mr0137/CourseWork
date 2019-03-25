#include "MainMass.h"
#include "FillMass.h"

void Ordered(int *MASS[p][m][n])//функція заповнення масиву за зростанням
{
	int i1=0, i, j, k;
	for (i=0; i<p; i++)
	{
		for (k=0; k<n; k++)
		{
			for (j=0; j<m; j++)
			{
				MASS[i][j][k]=i1;
				i1++;
			}
		}
		i1=0;
	}
}

void BackOrdered(int *MASS[p][m][n])//функція заповнення масиву за спаданням
{
    int i1=m*n-1, i, j, k;
	for (i=0; i<p; i++)
	{
		for (k=0; k<n; k++)
		{
			for (j=0; j<m; j++)
			{
				MASS[i][j][k]=i1;
				i1--;
			}
		}
		i1=m*n-1;
	}
}

void Rand(int *MASS[p][m][n])//функція заповнення масиву випадковими числами в обмеженні М*N
{
	int n1=m*n;
	int i, j, k;
	srand(time(NULL));
	for (i=0; i<p; i++)
	{
		for (j=0; j<m; j++)
		{
			for (k=0; k<n; k++)
			{
				MASS[i][j][k]=rand()%n1;

			}
		}
	}
}
