#include<iostream>
using namespace std;
/*
	Ŭ��ѧϰ
	дһ��ͨ�õ�����������еĳ����
	�����ˣ���Ȼд������
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
	int len = sizeof(ar[0]) / sizeof(ar[0]);//���⣺arr[len]��д���Ǵ����
	ans[len];
	int n = 0;
	for (int i=len-1;i>=0 ; i--)
	{
		ans[n] = ar[i];
		n++;
	}
	return ans[len];
}