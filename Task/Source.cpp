/*
* Done by:
* Student Name: Ivan Rudiy
* Student Group: 123
*Lab 2.1
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{
	int arrV[11];
	for (int i = 0; i < 11; i++) 
	{
		if (i % 2 == 0) 
		{
			arrV[i] = 6 * i - 9;
		}
		else 
		{
			arrV[i] = -9 + 2 * i;
		}
	}
	int size = 11;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++) 
		{
			if (arrV[j] > arrV[j + 1]) 
			{
				int temp = arrV[j];
				arrV[j] = arrV[j + 1];
				arrV[j + 1] = temp;
			}
		}
	}


	return 0;
}


