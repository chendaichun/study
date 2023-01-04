#include<iostream>
using namespace std;
/*
qiao zhuo zi you xi
*/
int mi3()
{
	for (int i = 1; i < 101; i++)
	{
		if (i % 10 == 7 || int(i / 10) == 7 || i % 7 == 0)
		{
			cout << "ÇÃ×À×Ó" << endl;
		}
		else 
		{
			cout << i << endl;
		}
	}
	return 0;
}