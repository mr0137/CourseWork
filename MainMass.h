#ifndef MAINMASS_H_INCLUDED
#define MAINMASS_H_INCLUDED
//"хедер", який містить головні константи та масив Res
#include <time.h>
//для тестового режиму краще використовувати константи p, m, n не більші за 10
#define p 4
#define m 66
#define n 33
#define measurements_number 28

#pragma warning (disable: 4244 4047 4013 4024)

extern clock_t Res[measurements_number];

#endif // MAINMASS_H_INCLUDED
