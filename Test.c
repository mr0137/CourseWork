#include "Test.h"
#include "MainMass.h"
#include "FirstChoise.h"
#include "SecondChoice.h"
#include "ThirdChoice.h"



void test(int *AllTime[], int *MASS[p][m][n], int *B[], int MODE)
{
	//в залежнсты від режиму буде виведено деякий(кі) масиви
	if (MODE == 1 )
	{
		firstchoice(AllTime, MASS, B, MODE);//виклик функції, в якій муститься функція сортування масива
	}
	if (MODE == 2 || MODE==5)
	{
		firstchoice(AllTime, MASS, B, MODE);//виклик функції, в якій муститься функція сортування масива
	}
	if (MODE == 3 || MODE==5)
	{
		secondchoice(AllTime, MASS, B, MODE);//виклик функції, в якій муститься функція сортування масива
	}
	if (MODE == 4 || MODE==5)
	{
		thirdchoice(AllTime, MASS, B, MODE);//виклик функції, в якій муститься функція сортування масива
	}

}
