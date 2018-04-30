#include <iostream>
using namespace std;

void printing(int* a)
{
	cout << *a << endl;
	*a = 20;
	return;
}

void main() {
	int Test1 = 10;
	int* Test2 = &Test1;


	cout << "Test2 : " << *Test2 << endl;
	printing(Test2);

	cout << "Test2 : " << *Test2 << endl;
	return;
}