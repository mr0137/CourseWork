#include "SecondChoice.h"
#include "FillMass.h"
#include "MainMass.h"
#include "Measurement.h"
#include "Second.h"

void mass_show2(int *MASS[p][m][n])//������� ������������(������) ������
{
	int i, j, k;
	for (i=0; i<p; i++)
		{
			for (j=0; j<m; j++)
			{
				for (k=0; k<n; k++)
				{
				printf("%i ",MASS[i][j][k]);

				}
				printf ("\n");
			}
			printf("\n\n");
		}

}

void secondchoice(int *AllTime[], int *MASS[p][m][n], int *B[], int MODE)//�������, ������� ���� ���, ������ �������
{//���������� �� ������������� ���� �� ������ Res[measur�ments_number]

	int i;
	for (i = 0; i < measurements_number; i++)
    {
        Ordered(MASS);//������ ������� ���������� ������ ���������� �� ����������
        if ((i == measurements_number-1) && ((MODE == 3) || (MODE == 5)))
		{
			printf("Second,Ordered,Unsorted  : \n");
			mass_show2(MASS);//������ ������� ������������ (������) ������ ��� �������� ����������
		}
        Res[i] = second_sort(MASS);//���������� ���������� ����� ���� ���������� ������
    }
    if (MODE==3 || MODE==5)
	{
		printf("Second,Ordered,Sorted  : \n");
		mass_show2(MASS);

	}
    if (MODE==8 || MODE==10)
	{
		 AllTime[6]=MeasurementProcessing();//���������� ������������� ���� �� AllTime
	}

	for (i = 0; i < measurements_number; i++)
    {
        BackOrdered(MASS);//������ ������� ���������� ������ ���������� �� ���������
        if ((i == measurements_number-1) && ((MODE == 3) || (MODE == 5)))
		{
			printf("Second,BackOrdered,Unsorted  : \n");
			mass_show2(MASS);
		}
        Res[i] = second_sort(MASS);
    }
    if (MODE==3 || MODE==5)
	{
		printf("Second,BackOrdered,Sorted  : \n");
		mass_show2(MASS);
	}
    if (MODE==8 || MODE==10)
	{
		 AllTime[7]=MeasurementProcessing();
	}

   for (i = 0; i < measurements_number; i++)
    {
        Rand(MASS);//������ ������� ���������� ������ ����������� ����������
        if ((i == measurements_number-1) && ((MODE == 3) || (MODE == 5)))
		{
			printf("Second,Rand,Unsorted  : \n");
			mass_show2(MASS);
		}
        Res[i] = second_sort(MASS);
    }
    if (MODE==3 || MODE==5)
	{
		printf("Second,Rand,Sorted  : \n");
		mass_show2(MASS);

	}
    if (MODE==8 || MODE==10)
	{
		 AllTime[8]=MeasurementProcessing();
	}
}
