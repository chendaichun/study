#include<iostream>
using namespace std;
/*
* 冒泡排序的通解
* 又失败了捏，去研究研究值传递与地址传递
* 终于成功了
*/
void re(int* p,int n);
int mi13()
{
	int arr[] = { 1,2,5,3,123,55,9,14,2,1335 };
	int len = sizeof(arr) / sizeof(arr[0]);
	re(arr, len);
	for (int i = 0; i <= len-1; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}
void re(int* p, int n)
{
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = 0; j <= n - 2; j++)
		{
			if (*(p+j) < *(p + 1 +j ))
			{
				int temp = *(p+j);
				*(p+j) = *(p + 1 + j);
				*(p + 1 + j) = temp;
			}
		}
	}
}