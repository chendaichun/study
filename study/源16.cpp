#include<iostream>
using namespace std;
/*
* �����ˣ�����ѧϰstruct
*/
struct students 
{
	string name;
	int age;
	char gender;
};
int main()
{
	students saibdsx[] = { {"zy",30,'Ů'},{"zy",19,'��'},{"ikun",3,'��'}};
	cout << (saibdsx+1)->age << endl;
	cout << saibdsx[1].age << endl;
	return 0;
}