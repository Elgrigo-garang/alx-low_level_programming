#include "main.h"
/**
 *_isalpha-checks for alphabets letters
 *
 * @c:character to be checked on
 * Return:return 0 or 1 depending on condion
 */
int _isalpha(int c)
	{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
	}
