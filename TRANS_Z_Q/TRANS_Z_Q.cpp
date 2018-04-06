#include <iostream>
#include <cstdlib>
#include "longFraction.h"
#include "longInteger.h"
#include "TRANS_Z_Q.h"
using namespace std;
/*
 getLongFraction
 Функция пребразует целое в дробное
 a - число
 */

longFraction getLongFraction(longInteger t)
    {
        longFraction ttr;
        if(t.A)
            {
                ttr.den.n = 1;
                ttr.den.A = (int*) malloc(sizeof(int));
                *(ttr.den.A) = 1;
                ttr.num.sign = t.sign;
                ttr.num.n = t.n;
                ttr.num.A = (int*) malloc(ttr.num.n*sizeof(int));
                for (int i = 0; i < t.n; ++i)
                    *(ttr.num.A+i) = *(t.A+i);
            }
        else
            cout << ("Ошибка, числа не существует!")<<endl;
        
        return ttr;
    }