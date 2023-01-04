#include<iostream>
using namespace std;
/*
	
*/
int mi12()
{
	int arr[] = { 0,1,2,3,4,5,6,7 };
	int* p = arr;
	for (int i = 1; i <= 8; i++)
	{
		cout << *p <<endl;
		cout << p << endl;
		p++;
	}
	return 0;
}