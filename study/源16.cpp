#include<iostream>
using namespace std;
/*
* 不烫了，继续学习struct
*/
struct students 
{
	string name;
	int age;
	char gender;
};
int main()
{
	students saibdsx[] = { {"zy",30,'女'},{"zy",19,'男'},{"ikun",3,'无'}};
	cout << (saibdsx+1)->age << endl;
	cout << saibdsx[1].age << endl;
	return 0;
}