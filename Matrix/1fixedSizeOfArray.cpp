#include <iostream>
#include <cmath>//perform the mathmetical operation
#include <bits/stdc++.h> //
#include <climits>
using namespace std;
int main()
{
	int arr[3][2] = {{10, 20},
					 {30, 40},
					 {50, 60}};

	for(int i = 0; i < 3; i++)//row
	{
		for(int j = 0; j < 2; j++)//colu
		{
			cout << arr[i][j] << " ";//print
		}
	}
	return 0;
}
//output  10 20 30 40 50 60 