#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
	float arr[4][5] = { {1.1,-2.0,-8.34,5.5,1.2},
		{-0.2,1.34,2.2,-3.5,1.1},
		{-2.9,-3.1,4.4,7.2,-8.1},
		{-2.6,-1.2,3.4,5.4,6.6} };
	float arr1[4];
	
	for (int i = 0; i < 4; i++) 
	{
		float mult = 1;
		for (int j = 0; j < 5; j++) 
		{
			if (arr[i][j] < 0) 
			{
				mult = mult * arr[i][j];
			}
		}
		arr1[i] = mult;
	}

	return 0;
}