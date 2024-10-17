#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
	int arr[5][4] = { {11,21,-3,4},
					{5,-6,0,8},
					{9,0,11,2},
					{4,-4,4,1},
					{0,1,-9,6} };

	int arr1[4];
	for (int i = 0; i < 4; i++) 
	{
		int min = arr[0][i];
		for (int j = 0; j < 5; j++) 
		{
			if (arr[j][i] < min) 
			{
				min = arr[j][i];
			}
		}
		arr1[i] = min;
	}
	return 0;
}