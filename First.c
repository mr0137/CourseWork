#include "First.h"
#include "MainMass.h"

void vector_trans(int *MASS[p][m][n], int *B[])//������� ��� ������������� ����������� ������ �� ������������ (�������)
{
	int m1=0, im, jm;
	for (jm=0; jm<n; jm++)
		{
			for (im=0; im<m; im++)
			{
				B[m1]=MASS[p-1][im][jm];
				m1++;
			}
		}
}

clock_t first_sort_vector(int *B[])//������� ���������� ������� ( � ����� ���� )
{   							   //���� �������� ��� ���������� �������
	clock_t start_vector, finish_vector;
    int Min, Max, L, R, imin, imax, i;
		L=0;
		R=m*n-1;
		start_vector=clock();
		while (L<R)
		{
			Min=B[L]; imin=L;
		    Max=B[L]; imax=L;
			for(i=L+1; i<=R; i++)
			{
				if(B[i]<Min)
				{
					Min=B[i];
					imin=i;
				}
				else
				{
					if (B[i]>Max)
					{
						Max=B[i];
						imax=i;
					}
				}
			}

			B[imin]=B[L];
			B[L]=Min;
			if (imax==L)
			{
				B[imin]=B[R];
			}
			else
			{
				B[imax]=B[R];
			}
			B[R]=Max;
			L++;
			R--;
		}
		finish_vector=clock();
		return finish_vector-start_vector;
}

clock_t first_sort(int *MASS[p][m][n], int *B[])//������� ���������� ����������� ������ ���������� ���������� �3 �������� ������
{						   //���� ������� ��� ���������� ������ ����������� ������ ����� �� �������������� �������� ��/� �����
    clock_t start_time_1, finish_time_1;
    int im, jm, km, Min, Max, L, R, imin, imax, i, j2, k2, i1=0;
    start_time_1=clock();
	for (km=0; km<p; km++)
	{//������������� ������ �� �������(69-77 ����� ����)
		for (jm=0; jm<n; jm++)
		{
			for (im=0; im<m; im++)
			{
				B[i1]=MASS[km][im][jm];
				i1++;
			}
		}
		i1=0;
		//��� �������� ���������� �3 ������� ������ ( �� ������������� )
		L=0;
		R=m*n-1;
		while (L<R)
		{
			Min=B[L]; imin=L;
		    Max=B[L]; imax=L;
			for(i=L+1; i<=R; i++)
			{
				if(B[i]<Min)
				{
					Min=B[i];
					imin=i;
				}
				else
				{
					if (B[i]>Max)
					{
						Max=B[i];
						imax=i;
					}
				}
			}
			B[imin]=B[L];
			B[L]=Min;
			if (imax==L)
			{
				B[imin]=B[R];
			}
			else
			{
				B[imax]=B[R];
			}
			B[R]=Max;
			L++;
			R--;
		}//������������� ��� ������������� ������� �� ������
		for (k2=0; k2<n; k2++)
		{
			for (j2=0; j2<m; j2++)
			{
				MASS[km][j2][k2]=B[i1];
				i1++;
			}
		}
		i1=0;

	}
	finish_time_1=clock();
	return finish_time_1-start_time_1;
}
