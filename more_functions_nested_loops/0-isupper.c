#include "main.h"
/**
  * _isupper - code
  * Description : Evaluate if its upper or lower
  *@c:The charaacter
  * Return:1 if its upper, else 0
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
