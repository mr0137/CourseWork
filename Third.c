#include "MainMass.h"
#include "Third.h"

clock_t third_sort(int *MASS[p][m][n])//функція сортування тривимірного масиву алгоритмом сортування №3 прямого вибору
{//Вона повертає час сортування УСЬОГО тривимірного масиву
	//сортування перерізів відбуваеться проходом по всьому тривимірному масиву без "чудо-індексів" та додаткових векторів
	//модифікаація сортування алгоритмом №3 власної розробки
	clock_t start_time_3, finish_time_3;

	start_time_3=clock();

      int Min, Max, Li, Lj, Ri, Rj, imin, jmin, imax, jmax, i, j, k, m1=0, l;

		for (k=0; k<p; k++)
		{
				l=0;
				Li=0; Lj=0;
				Ri=m-1; Rj=n-1;
				while (l==0)
				{
					Min=MASS[k][Li][Lj]; imin=Li; jmin=Lj;
					Max=MASS[k][Li][Lj]; imax=Li; jmax=Lj;
					///Пошук максимального/мінімального елементу та його місцезнаходження розбитий на три етапи
					///(1)
					if (Rj==Lj)
					{
						m1=Ri;
					}
					else{m1=m;}
					j=Lj;
					for (i=Li+1; i<m1; i++)
					{
							if(MASS[k][i][j]<Min)
							{
								Min=MASS[k][i][j];
								imin=i; jmin=j;
							}
							else
							{
								if (MASS[k][i][j]>Max)
								{
									Max=MASS[k][i][j];
								    imax=i; jmax=j;
								}
							}
						}
					///(2)
					if (Rj==Lj)
					{
						i=Li+1;
					}
					else{i=0;}
					j=Rj;
					for (i;i<=Ri; i++)
					{
						if(MASS[k][i][j]<Min)
							{
								Min=MASS[k][i][j];
								imin=i; jmin=j;
							}
							else
							{
								if (MASS[k][i][j]>Max)
								{
									Max=MASS[k][i][j];
								    imax=i; jmax=j;
								}
							}
					}
					///(3)
					for (j=Lj+1; j<Rj; j++)
					{
						for (i=0; i<m; i++)
							if(MASS[k][i][j]<Min)
							{
								Min=MASS[k][i][j];
								imin=i; jmin=j;
							}
							else
							{
								if (MASS[k][i][j]>Max)
								{
									Max=MASS[k][i][j];
								    imax=i; jmax=j;
								}
							}
					}
					///
					MASS[k][imin][jmin]=MASS[k][Li][Lj];
					MASS[k][Li][Lj]=Min;
					if ((imax==Li)&&(jmax==Lj))
					{
						MASS[k][imin][jmin]=MASS[k][Ri][Rj];
					}
					else
					{
						MASS[k][imax][jmax]=MASS[k][Ri][Rj];
					}
					MASS[k][Ri][Rj]=Max;
					Li++;
					Ri--;
					//встановлення j-координати барьєру на основі і-координати
					if (Li>m-1)
					{
						Li=0; Lj++;
					}
					if (Ri<0)
					{
						Ri=m-1; Rj--;
					}
					if (Rj<=Lj)//Умова, яка визначає момет, до якого буде сортуватись масив
					{
						if (n%2==1)//в залежності від парності/непарності j-розміру масиву умова міняється
						{
							if (Ri<Li)
							{
								l=1;
							}
						}
						if (n%2==0)
						{
							l=1;
						}
					}
                }
        }


finish_time_3=clock();
return finish_time_3-start_time_3;
}

