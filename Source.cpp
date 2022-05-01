/*
* Kurt Kangas
* CIS 1202 R02
* 05/01/2022
* Programming Assignment #15b
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <type_traits>
using namespace std;


template <class T>
T half(T number)
{
	string type = typeid(number).name();
	if (type == "int")
	{
		return round(static_cast<float>((number / 2.0)));
	}
	return static_cast<float>(number / 2.0);
}

int main()
{

	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;



	cout << endl << endl;
	system("pause");
	return 0;
}
