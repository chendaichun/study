#include<iostream>
using namespace std;
/*
	努力学习
	写一个通用的逆向输出数列的程序吧
	尽力了，仍然写不完美
*/
int unfan(int ar[],int ans[]);
int mi8()
{
	int a[] = {1,2,3,4,5};
	int b[5];
	cout << unfan(a,b);
	return 0;
}
int unfan(int ar[],int ans[])
{
	int len = sizeof(ar[0]) / sizeof(ar[0]);//问题：arr[len]的写法是错误的
	ans[len];
	int n = 0;
	for (int i=len-1;i>=0 ; i--)
	{
		ans[n] = ar[i];
		n++;
	}
	return ans[len];
}