#include<iostream>
using namespace std;
/*
	��5ֻzy���ҳ����ص�zy
*/
int findmost(int arrr[], int n);
int mi7()
{
	int arr[5] = { 300,350,200,400,250 };
	cout << findmost(arr, 5);//����ط�Ҫ�ر�ע��
	system("pause");
	return 0;
}
int findmost(int arrr[], int n)
{
	int ans=0;
	for (int i=0;i<=n;i++)
	{
		if (ans <= arrr[i])
		{
			ans = arrr[i];
		}
	}
	return ans;
}