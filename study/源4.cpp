#include<iostream>
using namespace std;
/*
	�о�swich��䲻����д�����Ծ�����
	2:�о�̫�޴���
*/
int mi5()
{
	char ans;
	cout << "������������ĩ�ȼ���ABCD��:";
	cin >> ans;
	switch (ans)
	{
	case 'A':
		cout <<"����ĺܰ�";
		break;
	case 'B':
		cout << "�㻹������";
		break;
	case 'C':
		cout << "�����ռ�ܴ���";
		break;
	case 'D':
		cout << "��";
		break;
	default:
		cout << "�����ɶ������";
		break;
	}
	return 0;
}