#include "FirstChoise.h"
#include "FillMass.h"
#include "MainMass.h"
#include "Measurement.h"
#include "First.h"

void mass_show(int *MASS[p][m][n])//функція демонстрації(виводу) масиву
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

void vector_show(int *B[])//функція демонстрації (виводу) вектора
{
	int i;
	for (i=0; i<m*n; i++)
	{
		printf("%i ", B[i]);
	}
	printf("\n");
}

void firstchoice(int *AllTime[], int *MASS[p][m][n], int *B[], int MODE)//функція, головна мета якої, виклик функції
{//сортування та переписування часу до масиву Res[measurеments_number]
	int i;
	///
	for (i = 0; i < measurements_number; i++)
    {
        Ordered(MASS);//виклик функції заповнення масиву елементами за зростанням
        vector_trans(MASS, B);//виклик функції переписування елементів двовимірного масиву до одновимірного масиву
         if ((i == measurements_number-1) && ((MODE == 1) || (MODE == 5)))
		{
			printf("Vector,Ordered,Unsorted  : \n");
			vector_show(B);//виклик функції демонстрації (виводу) масиву для перевірки сортування
		}
        Res[i] = first_sort_vector(B);//збереження результатів виміру часу сортування масиву
    }
    if (MODE==1 || MODE==5)
	{
		printf("Vector,Ordered,Sorted  : \n");
		vector_show(B);
	}
    if (MODE==6 || MODE==10)
	{
		 AllTime[0]=MeasurementProcessing();//збереження усередненного часу до AllTime
	}

	for (i = 0; i < measurements_number; i++)
    {
        BackOrdered(MASS);//виклик функції заповнення масиву елементами за спаданням
        vector_trans(MASS, B);
        if ((i == measurements_number-1) && ((MODE == 1) || (MODE == 5)))
		{
			printf("Vector,BackOrdered,Unsorted  : \n");
			vector_show(B);
		}
        Res[i] = first_sort_vector(B);
    }
    if (MODE==1 || MODE==5)
	{
		printf("Vector,BackOrdered,Sorted  : \n");
		vector_show(B);
	}
     if (MODE==6 || MODE==10)
	{
		AllTime[1]=MeasurementProcessing();
	}


   for (i = 0; i < measurements_number; i++)
    {
        Rand(MASS);//виклик функції заповнення масиву випадковими елементами
        vector_trans(MASS, B);
        if ((i == measurements_number-1) && ((MODE == 1) || (MODE == 5)))
		{
			printf("Vector,Rand,Unsorted  : \n");
			vector_show(B);
		}
        Res[i] = first_sort_vector(B);
    }
    if (MODE==1 || MODE==5)
	{
		printf("Vector,Rand,Sorted  : \n");
		vector_show(B);
	}
     if (MODE==6 || MODE==10)
	{
		AllTime[2]=MeasurementProcessing();
	}
	///
	for (i = 0; i < measurements_number; i++)
    {
        Ordered(MASS);
         if ((i == measurements_number-1) && ((MODE == 2) || (MODE == 5)))
		{
			printf("First,Ordered,Unsorted  : \n");
			mass_show(MASS);//виклик функції демонстрації (виводу) масиву для перевірки сортування
		}
        Res[i] = first_sort(MASS,B);
    }
    if (MODE==2 || MODE==5)
	{
		printf("First,Ordered,Sorted  : \n");
		mass_show(MASS);
	}
    if (MODE==7 || MODE==10)
	{
		 AllTime[3]=MeasurementProcessing();
	}

	for (i = 0; i < measurements_number; i++)
    {
        BackOrdered(MASS);
        if ((i == measurements_number-1) && ((MODE == 2) || (MODE == 5)))
		{
			printf("First,BackOrdered,Unsorted  : \n");
			mass_show(MASS);
		}
        Res[i] = first_sort(MASS,B);
    }
     if (MODE==7 || MODE==10)
	{
		AllTime[4]=MeasurementProcessing();
	}
	if (MODE==2 || MODE==5)
	{
		printf("First,BackOrdered,Sorted  : \n");
		mass_show(MASS);
	}

   for (i = 0; i < measurements_number; i++)
    {
        Rand(MASS);
        if ((i == measurements_number-1) && ((MODE == 2) || (MODE == 5)))
		{
			printf("First,Rand,Unsorted  : \n");
			mass_show(MASS);
		}
        Res[i] = first_sort(MASS,B);
    }
    if (MODE==2 || MODE==5)
	{
		printf("First,Rand,Sorted  : \n");
		mass_show(MASS);
	}
     if (MODE==7 || MODE==10)
	{
		AllTime[5]=MeasurementProcessing();
	}


}
