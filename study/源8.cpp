#include<iostream>
using namespace std;
/*
	继续前行
	冒泡算法
*/
int mi9()
{
	int arr[] = { 4,2,8,0,5,7,1,3,100 };
	int box;
	for (int i = 7; i > 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				box = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = box;
			}
		}
	}
	int m = 0;
	while (m <= 8)
	{
		cout << arr[m] << " ";
		m++;
	}
	return 0;
}