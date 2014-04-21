#include "stdafx.h"
int main()
{
	return 1;
}

bool checkInSquare(float x, float y, float r)
{
	if (sqrt(sqrt(x) + sqrt(y))< r)
		return true;
	return false;
}

void Run(int m,int n)
{
	for (int i = 0; i < m; i++)
		for (int i = 0; i < n; i++)
			;
}