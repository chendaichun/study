#include<iostream>
using namespace std;
/*
	֥ʿ˵����ˮ�ɻ���
*/
int mi()
{
	int i;
	for (i = 100; i < 1000; i++)
	{
		if ((pow((i%10),3)+pow(((int)(i/10))%10,3)+pow((int)(i/100),3))==i)
		{
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}