#include "Test.h"
#include "MainMass.h"
#include "FirstChoise.h"
#include "SecondChoice.h"
#include "ThirdChoice.h"



void test(int *AllTime[], int *MASS[p][m][n], int *B[], int MODE)
{
	//� ��������� �� ������ ���� �������� ������(�) ������
	if (MODE == 1 )
	{
		firstchoice(AllTime, MASS, B, MODE);//������ �������, � ��� ��������� ������� ���������� ������
	}
	if (MODE == 2 || MODE==5)
	{
		firstchoice(AllTime, MASS, B, MODE);//������ �������, � ��� ��������� ������� ���������� ������
	}
	if (MODE == 3 || MODE==5)
	{
		secondchoice(AllTime, MASS, B, MODE);//������ �������, � ��� ��������� ������� ���������� ������
	}
	if (MODE == 4 || MODE==5)
	{
		thirdchoice(AllTime, MASS, B, MODE);//������ �������, � ��� ��������� ������� ���������� ������
	}

}
