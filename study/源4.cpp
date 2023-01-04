#include<iostream>
using namespace std;
/*
	感觉swich语句不经常写捏，所以就玩玩
	2:感觉太愚蠢了
*/
int mi5()
{
	char ans;
	cout << "请输入您的期末等级（ABCD）:";
	cin >> ans;
	switch (ans)
	{
	case 'A':
		cout <<"你真的很棒";
		break;
	case 'B':
		cout << "你还可以嘛";
		break;
	case 'C':
		cout << "进步空间很大捏";
		break;
	case 'D':
		cout << "寄";
		break;
	default:
		cout << "你输得啥子玩意";
		break;
	}
	return 0;
}