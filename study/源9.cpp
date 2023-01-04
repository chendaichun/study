#include<iostream>
using namespace std;
/*
	学习二维数组
*/
int mi10()
{
	int arr[2][3] = { {0,1,2},{3,2,4} };
	cout << sizeof(arr[0]) << endl;
	cout << sizeof(arr[0][0]) << endl;
	cout << arr << endl;//对数组的名字进行取指针、解指针取值的操作似乎无效
	cout << &arr[1][2] << endl;

	return 0;
}