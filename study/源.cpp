#include<iostream>
#include<ctime>
using namespace std;
/*
	芝士说明：每天学一点点就好
	就先写一个最爱的猜数字游戏吧
*/
int main1()
{
	srand(time(NULL));
	int ans = (rand()%99)+1;
	int y_ans=0;
	while (y_ans != ans)
	{
		cout << "范围是【1,99】，慢慢猜" << endl << "请输入您的答案:";
		cin >> y_ans;
		y_ans > ans ? cout << "大了捏" << endl: cout << "小了?" << endl;
	}
	cout << "您猜对了捏!" << endl;
	system("pause");
	return 0;
}
