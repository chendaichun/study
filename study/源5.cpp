#include<iostream>
using namespace std;
/*
芝士说明：数组还是很有趣的
*/
void mi6()//int main 写烦了捏
{
	//第一阶段：初步初步
	string str[4] = {"想你","十分想你","百分想你","最美的青春的小伙伴"};
	cout << str[2] << endl;
	str[3] = "kissshot";

	//第二阶段：二维数组后面才学捏
	// nums[] = {[1,2,3],[4,5,6],[7,8,9]};一不小心乱写成了二维数组了捏

	//第三阶段：len
	int num[] = {1,2,3,4,5,6,7};
	cout << sizeof(num) << endl;
	cout << sizeof(num[0]) << endl;
	cout << sizeof(num) / sizeof(num[0]) << "\n";

	//第四阶段：指针
	int arr[] = { 1,2,3 };
	cout << arr << endl;
	cout << (unsigned int)arr << endl;
	cout << (unsigned int)&arr[1] << endl;
	cout << (int)&arr[2] << endl;
	system("pause");
}