#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
	int arr1[10];
	int arr2[10];
	int arr3[10];

	for (int i = 0; i < 10; i++) 
	{
		arr1[i] = 49 + i;//Pulled the expression out of my mind

	}
	for (int i = 0; i < 10; i++) 
	{
		arr2[i] = 58 - i;//same
	}
	int n = 0;
	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 10; j++) 
		{
			if (arr1[i] == arr2[j]) 
			{
				arr3[n] = arr1[i];
				n++;
				break;
			}
		
		}
	
	}
	//I was looking for the sum of elements with a code greater than 50
	int sum = 0;
	for (int i = 0; i < n; i++) 
	{
		if (arr3[i] > 50) 
		{
			sum = sum + arr3[i];
		}
	
	}

	return 0;
}