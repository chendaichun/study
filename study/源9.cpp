#include<iostream>
using namespace std;
/*
	ѧϰ��ά����
*/
int mi10()
{
	int arr[2][3] = { {0,1,2},{3,2,4} };
	cout << sizeof(arr[0]) << endl;
	cout << sizeof(arr[0][0]) << endl;
	cout << arr << endl;//����������ֽ���ȡָ�롢��ָ��ȡֵ�Ĳ����ƺ���Ч
	cout << &arr[1][2] << endl;

	return 0;
}