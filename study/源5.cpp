#include<iostream>
using namespace std;
/*
֥ʿ˵�������黹�Ǻ���Ȥ��
*/
void mi6()//int main д������
{
	//��һ�׶Σ���������
	string str[4] = {"����","ʮ������","�ٷ�����","�������ഺ��С���"};
	cout << str[2] << endl;
	str[3] = "kissshot";

	//�ڶ��׶Σ���ά��������ѧ��
	// nums[] = {[1,2,3],[4,5,6],[7,8,9]};һ��С����д���˶�ά��������

	//�����׶Σ�len
	int num[] = {1,2,3,4,5,6,7};
	cout << sizeof(num) << endl;
	cout << sizeof(num[0]) << endl;
	cout << sizeof(num) / sizeof(num[0]) << "\n";

	//���Ľ׶Σ�ָ��
	int arr[] = { 1,2,3 };
	cout << arr << endl;
	cout << (unsigned int)arr << endl;
	cout << (unsigned int)&arr[1] << endl;
	cout << (int)&arr[2] << endl;
	system("pause");
}