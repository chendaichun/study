#include<iostream>
#include<ctime>
using namespace std;
/*
	֥ʿ˵����ÿ��ѧһ���ͺ�
	����дһ����Ĳ�������Ϸ��
*/
int main1()
{
	srand(time(NULL));
	int ans = (rand()%99)+1;
	int y_ans=0;
	while (y_ans != ans)
	{
		cout << "��Χ�ǡ�1,99����������" << endl << "���������Ĵ�:";
		cin >> y_ans;
		y_ans > ans ? cout << "������" << endl: cout << "С��?" << endl;
	}
	cout << "���¶�����!" << endl;
	system("pause");
	return 0;
}
