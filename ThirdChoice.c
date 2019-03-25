#include "ThirdChoice.h"
#include "FillMass.h"
#include "MainMass.h"
#include "Measurement.h"
#include "Third.h"

void mass_show3(int *MASS[p][m][n])//функція демонстрації(виводу) масиву
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

void thirdchoice(int *AllTime[], int *MASS[p][m][n], int *B[], int MODE)//функція, головна мета якої, виклик функції
{//сортування та переписування часу до масиву Res[measurеments_number]
	int i;
	for (i = 0; i < measurements_number; i++)
    {
        Ordered(MASS);//виклик функції заповнення масиву елементами за зростанням
        if ((i == measurements_number-1) && ((MODE == 4) || (MODE == 5)))
		{
			printf("Third,Ordered,Unsorted  : \n");
			mass_show3(MASS);//виклик функції демонстрації (виводу) масиву для перевірки сортування
		}
        Res[i] = third_sort(MASS);//збереження результатів виміру часу сортування масиву
    }
    if (MODE==4 || MODE==5)
	{
		printf("Third,Ordered,Sorted  : \n");
		mass_show3(MASS);

	}
    if (MODE==9 || MODE==10)
	{
		 AllTime[9]=MeasurementProcessing();//збереження усередненного часу до AllTime
	}

	for (i = 0; i < measurements_number; i++)
    {
        BackOrdered(MASS);//виклик функції заповнення масиву елементами за спаданням
        if ((i == measurements_number-1) && ((MODE == 4) || (MODE == 5)))
		{
			printf("Third,BackOrdered,Unsorted  : \n");
			mass_show3(MASS);
		}
        Res[i] = third_sort(MASS);
    }
    if (MODE==4 || MODE==5)
	{
		printf("Third,BackOrdered,Sorted  : \n");
		mass_show3(MASS);
	}
    if (MODE==9 || MODE==10)
	{
		 AllTime[10]=MeasurementProcessing();
	}

   for (i = 0; i < measurements_number; i++)
    {
        Rand(MASS);//виклик функції заповнення масиву випадковими елементами
        if ((i == measurements_number-1) && ((MODE == 4) || (MODE == 5)))
		{
			printf("Third,Rand,Unsorted  : \n");
			mass_show3(MASS);
		}
        Res[i] = third_sort(MASS);
    }
    if (MODE==4 || MODE==5)
	{
		printf("Third,Rand,Sorted  : \n");
		mass_show3(MASS);
	}
    if (MODE==9 || MODE==10)
	{
		 AllTime[11]=MeasurementProcessing();
	}

}
