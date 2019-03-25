#include "Course.h"
#include "MainMass.h"
#include "FirstChoise.h"
#include "SecondChoice.h"
#include "ThirdChoice.h"


void course(int *AllTime[], int *MASS[p][m][n], int *B[], int MODE)
{
//вивід результатів сортування в залежності від обраного режиму
		printf("Mass[%i][%i][%i] \n", p, m, n);
		printf("\t       Ordered \t     BackOrdered\tRandom \n");
		if (MODE==6 || MODE==10)
		{
			firstchoice(AllTime, MASS, B, MODE);//виклик функції, в якій муститься функція сортування масива
			printf("Vector\t %10.1i \t %10.1i \t %10.1i \n", AllTime[0] , AllTime[1] , AllTime[2]);
		}
		if (MODE==7 || MODE==10)
		{
			firstchoice(AllTime, MASS, B, MODE);//виклик функції, в якій муститься функція сортування масива
			printf("First \t %10.1i \t %10.1i \t %10.1i \n", AllTime[3] , AllTime[4] , AllTime[5]);
		}
		if (MODE==8 || MODE==10)
		{
			secondchoice(AllTime, MASS, B, MODE);//виклик функції, в якій муститься функція сортування масива
			printf("Second\t %10.1i \t %10.1i \t %10.1i \n", AllTime[6] , AllTime[7] , AllTime[8]);
		}
		if (MODE==9 || MODE==10)
		{
			thirdchoice(AllTime, MASS, B, MODE);//виклик функції, в якій муститься функція сортування масива
			printf("Third \t %10.1i \t %10.1i \t %10.1i \n", AllTime[9] , AllTime[10] , AllTime[11]);
		}
}
