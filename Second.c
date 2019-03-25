#include "Second.h"
#include "MainMass.h"

#include <time.h>

clock_t second_sort(int *MASS[p][m][n])//функція сортування тривимірного масиву за допомогою "уявного" вектора
{//Тобто ми змінюємо індекси таким чином, що завдяки ним ми ніби "ходимо" по вектору
	// Функція повертає час сортування УСЬОГО тривимірного масиву
    clock_t start_time_2, finish_time_2;
    start_time_2=clock();

        int Min, Max, L, R, imin, imax, i, k;
        for (k=0; k<p; k++)
        {//модифікований алгоритм сортування прямого вибору №3
			L=0;
			R=m*n-1;
            while (L<R)
			{

				Min=MASS[k][(L)%m][(L)/m]; imin=L;
				Max=MASS[k][(L)%m][(L)/m]; imax=L;


				for(i=L+1; i<=R; i++)
				{
					if(MASS[k][(i)%m][(i)/m]<Min)
					{
						Min=MASS[k][(i)%m][(i)/m];
						imin=i;
					}
					else
					{
						if (MASS[k][(i)%m][(i)/m]>Max)
						{
							Max=MASS[k][(i)%m][(i)/m];
							imax=i;
						}
					}
				}
				MASS[k][(imin)%m][(imin)/m]=MASS[k][(L)%m][(L)/m];
				MASS[k][(L)%m][(L)/m]=Min;
				if (imax==L)
				{
					MASS[k][(imin)%m][(imin)/m]=MASS[k][(R)%m][(R)/m];
				}
				else
				{
					MASS[k][(imax)%m][(imax)/m]=MASS[k][(R)%m][(R)/m];
				}
				MASS[k][(R)%m][(R)/m]=Max;
				L++;
				R--;
            }
        }
    finish_time_2=clock();
    return finish_time_2-start_time_2;
}
