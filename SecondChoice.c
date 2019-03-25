#include "SecondChoice.h"
#include "FillMass.h"
#include "MainMass.h"
#include "Measurement.h"
#include "Second.h"

void mass_show2(int *MASS[p][m][n])//функція демонстрації(виводу) масиву
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

void secondchoice(int *AllTime[], int *MASS[p][m][n], int *B[], int MODE)//функція, головна мета якої, виклик функції
{//сортування та переписування часу до масиву Res[measurеments_number]

	int i;
	for (i = 0; i < measurements_number; i++)
    {
        Ordered(MASS);//виклик функції заповнення масиву елементами за зростанням
        if ((i == measurements_number-1) && ((MODE == 3) || (MODE == 5)))
		{
			printf("Second,Ordered,Unsorted  : \n");
			mass_show2(MASS);//виклик функції демонстрації (виводу) масиву для перевірки сортування
		}
        Res[i] = second_sort(MASS);//збереження результатів виміру часу сортування масиву
    }
    if (MODE==3 || MODE==5)
	{
		printf("Second,Ordered,Sorted  : \n");
		mass_show2(MASS);

	}
    if (MODE==8 || MODE==10)
	{
		 AllTime[6]=MeasurementProcessing();//збереження усередненного часу до AllTime
	}

	for (i = 0; i < measurements_number; i++)
    {
        BackOrdered(MASS);//виклик функції заповнення масиву елементами за спаданням
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
        Rand(MASS);//виклик функції заповнення масиву випадковими елементами
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
