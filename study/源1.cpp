#include<iostream>
using namespace std;
/*
	那么再用do while写一个水仙花数吧
*/
int main()
{
	int i = 100;
	do
	{
		if ((pow((i % 10), 3) + pow(((int)(i / 10)) % 10, 3) + pow((int)(i / 100), 3)) == i)
		{
			cout << i << endl;
		}
		i++;
	} while (i < 1000);
	i=699;
	cout << pow((int)((i / 10) % 10), 1) << endl;
	system("pause");
	return 0;
}