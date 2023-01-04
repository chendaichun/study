#include<iostream>
using namespace std;
/**/
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void print(int arr[] ,int n);
int mi14()
{
	int arr[] = { 1,2,5,6,9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	arr[0] = arr[1];
	print(arr,n);
	int a = 1;
	int b = 2;
	swap(a, b);
	cout << a << endl;
	return 0;
}
void print(int arr[],int n)
{
	
	for (int i = 0; i <= n - 1; i++)
	{
		cout << arr[i] << endl;
	}
}