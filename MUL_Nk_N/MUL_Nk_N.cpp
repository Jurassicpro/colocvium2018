/*

expNumber - функция, работа которой заключается
в умножении натурального числа на 10^k.


*/

#include <cstdlib>
#include <iostream>
#include "LongNat.h"
#include "MUL_Nk_N.h"

void expNumber(LNGNT* str, int k)
{
	if (str->A != NULL)			// если был передан указатель на NULL - ошибка
	{
		for (int i = str->n; i < str->n+k; i++)
		{
			str->A = realloc(str->A, str->n+i * sizeof(int*));
			*(str->A + i) = 0;
		}
		str->n += k;
	}
	else
		cout <<"Ошибка, заданно пустое значение!"<<endl;
}