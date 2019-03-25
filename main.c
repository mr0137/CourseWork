#include <stdio.h>
#include <time.h>
#include "MainMass.h"
#include "Course.h"
#include "Test.h"

int main()
{
	int MODE;
	int MASS[p][m][n], B[m*n], AllTime[12];
	//меню
	printf("\n\n\t\t\tChoose MODE :\n\n");
	printf("\t\tTest MODE, Vector   - Press 1+ENTER\n");
	printf("\t\tTest MODE, First    - Press 2+ENTER\n");
	printf("\t\tTest MODE, Second   - Press 3+ENTER\n");
	printf("\t\tTest MODE, Third    - Press 4+ENTER\n");
	printf("\t\tTest MODE, All      - Press 5+ENTER\n");
	printf("\t\tCourse MODE, Vector - Press 6+ENTER\n");
	printf("\t\tCourse MODE, First  - Press 7+ENTER\n");
	printf("\t\tCourse MODE, Second - Press 8+ENTER\n");
	printf("\t\tCourse MODE, Third  - Press 9+ENTER\n");
	printf("\t\tCourse MODE, All    - Press 10+ENTER\n");
	scanf_s("%i", &MODE);
	switch(MODE)
	{
	case 1:
		printf("\n Wait some seconds, please...\n");
		test(AllTime, MASS, B, MODE);//виклик функції тестового режиму
		break;
	case 2:
		printf("\n Wait some seconds, please...\n");
		test(AllTime, MASS, B, MODE);//виклик функції тестового режиму
		break;
	case 3:
		printf("\n Wait some seconds, please...\n");
		test(AllTime, MASS, B, MODE);//виклик функції тестового режиму
		break;
	case 4:
		printf("\n Wait some seconds, please...\n");
		test(AllTime, MASS, B, MODE);//виклик функції тестового режиму
		break;
	case 5:
		printf("\n Wait some seconds, please...\n");
		test(AllTime, MASS, B, MODE);//виклик функції тестового режиму
		break;
	case 6:
		printf("\n Wait some seconds, please...\n");
		course(AllTime, MASS, B, MODE);//виклик функції "курсового" режиму
		break;
	case 7:
		printf("\n Wait some seconds, please...\n");
		course(AllTime, MASS, B, MODE);//виклик функції "курсового" режиму
		break;
	case 8:
		printf("\n Wait some seconds, please...\n");
		course(AllTime, MASS, B, MODE);//виклик функції "курсового" режиму
		break;
	case 9:
		printf("\n Wait some seconds, please...\n");
		course(AllTime, MASS, B, MODE);//виклик функції "курсового" режиму
		break;
	case 10:
		printf("\n Wait some seconds, please...\n");
		course(AllTime, MASS, B, MODE);//виклик функції "курсового" режиму
		break;
	default :
		break;
	}
	system("pause");
    return 0;
}
