#include<iostream>
using namespace std;
/*
	���ڿ�ʼ��ָ���ѧϰ��
*/
int mi11()
{
	int a = 1000;
	int* p;
	p = &a;
	cout << p << endl;
	cout << *&*&*p << endl;
	cout << &p << endl;
	cout << &p;
	cout << sizeof(float) << endl;
	float ba = 0.123;
	float* p2 = &ba;
	cout << sizeof(long long *) << endl;
	system("pause");
	return 0;
}