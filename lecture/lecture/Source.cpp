#include <iostream>
using namespace std;
const int SIZE = 3;
int main()
{

	int age[SIZE];// an array of 3 intergers. 


	//take input
	for (int i = 0; i < SIZE; i++)
	{
		cout << "enter your age please: " << endl;
		cin >> age[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << "age of #"<< i << " is "<<age[i] << endl;
	}

	cout << "done" << endl;

	system("pause");
	return 0;
}