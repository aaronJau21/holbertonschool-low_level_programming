#include "main.h"

/**
  * _isdigit - code
  * Description : Evaluate if its a digit
  * @c:The charaacter
  * Return:1 if its digit, else 0
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
