#include <stdlib.h>
#include <stdio.h>
#include "longNat.h"
#include "_NZER_N_B.h"

/*
������� ��� �������� ����� �� ����,
1 - �� ���. �����, 0 - ���. �����, -1 - ������

���������:
1) a - ������ �����

return: int
*/

int isZero(LNGNT x)
{
	int ans = 0;
	if (x.A)
	{
		for (int i = 0; i < x.n; i++)
			if (x.A[i] != 0)
				ans = 1;
	}
	else
	{
		printf("\n������, ����� �� ����������!\n");
		ans = -1;
	}

	return ans;
}