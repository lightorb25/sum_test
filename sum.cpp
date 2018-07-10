#include "sum.h"

int sum(int n)
{
	int i,_sum;
	for(i=1;i<=n;i++)
	{
		_sum += i;	
	}
	return _sum;
}
