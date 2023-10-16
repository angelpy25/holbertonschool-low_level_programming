#include "main.h"

/**
 * _islower - check if the input is lowercase 
 * Return: return 1 if true and 0 if false
 */
int _islower(int c)
{
	int temp = c;

	if( temp >= 97 && temp <= 122){
		return (1);
	}
	else
		return (0);
}
