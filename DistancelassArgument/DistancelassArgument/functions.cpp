#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance():feet(0),inches(0) {}
	Distance(int ft, float in) :feet(ft), inches(in) {}

	void setDist(int f, float i)
	{
		feet = f;
		inches  =i;
	}
	void getDist()
	{
		cout << "\nEnter feet: ";
		cin >> feet;
		cout << "\nEnter inches: ";
		cin >> inches;

	}
	void showDist()
	{
		cout << "feet: " << feet << " and inches: " << inches << endl;
	}
	void add_dist(Distance d1, Distance d2);
	
};
int main()
{
	Distance d1, d2(1,15);
	d1.showDist();
	d2.showDist();
	Distance d3(2, 4), d4;
	d4.add_dist(d2, d3);
	d3.showDist();
	d4.showDist();



	system("pause");//REMOVE BEFORE SUBMIT
	return 0;
}
void Distance::add_dist(Distance d1, Distance d2)
{
	inches = d2.inches + d1.inches;
	feet = 0; 
	if (inches >= 12.0)
	{
		inches -= 12.0;
		feet++;
	}
	feet += d2.feet + d1.feet;
}